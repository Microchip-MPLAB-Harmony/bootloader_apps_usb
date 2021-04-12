/*******************************************************************************
  Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This file contains the "main" function for a project.

  Description:
    This file contains the "main" function for a project.  The
    "main" function calls the "SYS_Initialize" function to initialize the state
    machines of all modules in the system
 *******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2021 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *******************************************************************************/
// DOM-IGNORE-END

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include <stddef.h>                     // Defines NULL
#include <stdbool.h>                    // Defines true
#include <stdlib.h>                     // Defines EXIT_FAILURE
#include "definitions.h"                // SYS function prototypes
#include <sys/kmem.h>


#define FLASH_START                     NVM_FLASH_START_ADDRESS
#define FLASH_LENGTH                    NVM_FLASH_SIZE
#define PAGE_SIZE                       NVM_FLASH_ROWSIZE
#define ERASE_BLOCK_SIZE                NVM_FLASH_PAGESIZE
#define PAGES_IN_ERASE_BLOCK            (ERASE_BLOCK_SIZE / PAGE_SIZE)

#define APP_START_ADDRESS               FLASH_START

#define MID_OF_FLASH                    (FLASH_LENGTH / 2)

#define LOWER_FLASH_START               (FLASH_START)
#define LOWER_FLASH_SERIAL_START        (LOWER_FLASH_START + MID_OF_FLASH - PAGE_SIZE)
#define LOWER_FLASH_SERIAL_SECTOR       (LOWER_FLASH_START + MID_OF_FLASH - ERASE_BLOCK_SIZE)

#define UPPER_FLASH_START               (FLASH_START + MID_OF_FLASH)
#define UPPER_FLASH_SERIAL_START        (UPPER_FLASH_START + MID_OF_FLASH - PAGE_SIZE)
#define UPPER_FLASH_SERIAL_SECTOR       (UPPER_FLASH_START + MID_OF_FLASH - ERASE_BLOCK_SIZE)

#define FLASH_SERIAL_PROLOGUE           (0xDEADBEEFU)
#define FLASH_SERIAL_EPIOLOGUE          (0xBEEFDEADU)
#define FLASH_SERIAL_CLEAR              (0xFFFFFFFFU)

#define LOWER_FLASH_SERIAL_READ         ((T_FLASH_SERIAL *)KVA0_TO_KVA1(LOWER_FLASH_SERIAL_START))
#define UPPER_FLASH_SERIAL_READ         ((T_FLASH_SERIAL *)KVA0_TO_KVA1(UPPER_FLASH_SERIAL_START))

typedef enum
{
    PROGRAM_FLASH_BANK_1,
    PROGRAM_FLASH_BANK_2,
} T_FLASH_BANK;

/* Structure to validate the Flash serial and its checksum
 * Note: The order of the members should not be changed
 */
typedef struct
{
    uint32_t prologue;
    uint32_t serial;
    uint32_t epilogue;
    uint32_t dummy;
} T_FLASH_SERIAL;

T_FLASH_SERIAL CACHE_ALIGN  update_flash_serial;

volatile uint32_t dummy_read;

/* Function to update the serial number based on address */
static void update_FlashSerial(uint32_t serial, uint32_t addr)
{
    update_flash_serial.serial      = serial;
    update_flash_serial.prologue    = FLASH_SERIAL_PROLOGUE;
    update_flash_serial.epilogue    = FLASH_SERIAL_EPIOLOGUE;

    NVM_QuadWordWrite((uint32_t *)&update_flash_serial, addr);

    while(NVM_IsBusy() == true)
    {

    }
}

/* Function to swap the banks.
 * This function has to be removed once NVM PLIB has the support 
 */
static void programFlashSwapBank( T_FLASH_BANK flash_bank )
{
    volatile uint32_t processorStatus;

    processorStatus = __builtin_disable_interrupts();

    /* NVMOP can be written only when WREN is zero. So, clear WREN */
    NVMCONCLR = _NVMCON_WREN_MASK;

    /* Write the unlock key sequence */
    NVMKEY = 0x0;
    NVMKEY = 0xAA996655;
    NVMKEY = 0x556699AA;

    if (flash_bank == PROGRAM_FLASH_BANK_1)
    {
        /* Map Program Flash Memory Bank 1 to lower region */
        NVMCONCLR = _NVMCON_PFSWAP_MASK;
    }
    else if (flash_bank == PROGRAM_FLASH_BANK_2)
    {
        /* Map Program Flash Memory Bank 2 to lower region */
        NVMCONSET = _NVMCON_PFSWAP_MASK;
    }

    __builtin_mtc0(12, 0, processorStatus);
}

/* Function to Select Appropriate program flash bank based on the serial number */
void programFlashBankSelect( void )
{
    /* Map Program Flash Bank 1 to lower region after a reset */
    programFlashSwapBank(PROGRAM_FLASH_BANK_1);

    T_FLASH_SERIAL *lower_flash_serial = LOWER_FLASH_SERIAL_READ;
    T_FLASH_SERIAL *upper_flash_serial = UPPER_FLASH_SERIAL_READ;

    /* If Both Flash Panels do not have any Serial number.
     * This should be executed only at first boot-up
     */
    if( lower_flash_serial->prologue == FLASH_SERIAL_CLEAR &&
        upper_flash_serial->prologue == FLASH_SERIAL_CLEAR)
    {
        /* Erase and Reset Lower flash Serial Sector */
        NVM_PageErase(LOWER_FLASH_SERIAL_SECTOR);

        while(NVM_IsBusy() == true)
        {

        }

        update_FlashSerial(0, LOWER_FLASH_SERIAL_START);

        /* Erase and Reset Upper flash Serial Sector */
        NVM_PageErase(UPPER_FLASH_SERIAL_SECTOR);

        while(NVM_IsBusy() == true)
        {

        }

        update_FlashSerial(0, UPPER_FLASH_SERIAL_START);
    }
    /* If both the panels have proper checksum and serial number*/
    else if((lower_flash_serial->prologue == FLASH_SERIAL_PROLOGUE) &&
            (lower_flash_serial->epilogue == FLASH_SERIAL_EPIOLOGUE) &&
            (upper_flash_serial->prologue == FLASH_SERIAL_PROLOGUE) &&
            (upper_flash_serial->epilogue == FLASH_SERIAL_EPIOLOGUE))
    {
        /* If Upper flash panel has latest firmware */
        if(upper_flash_serial->serial > lower_flash_serial->serial)
        {
            /* Map Program Flash Bank 2 to lower region */
            programFlashSwapBank(PROGRAM_FLASH_BANK_2);

            /* Perform Dummy Read of Inactive panel(Upper Flash) after BankSwap
             * for Swap to take effect
             */
            dummy_read = *(uint32_t *)(UPPER_FLASH_START);
        }
    }
    /* Fallback Case when Panel 1 checksum and serial number is corrupted */
    else if((upper_flash_serial->prologue == FLASH_SERIAL_PROLOGUE) &&
            (upper_flash_serial->epilogue == FLASH_SERIAL_EPIOLOGUE))
    {
        /* Map Program Flash Bank 2 to lower region */
        programFlashSwapBank(PROGRAM_FLASH_BANK_2);

        /* Perform Dummy Read of Inactive panel(Upper Flash) after BankSwap
         * for Swap to take effect
         */
        dummy_read = *(uint32_t *)(UPPER_FLASH_START);
    }
}

void jumpToApplication( void )
{
    void (*fptr)(void);

    /* Select Program Flash Bank with latest Firmware */
    programFlashBankSelect();

    /* Set default to APP_START_ADDRESS */
    fptr = (void (*)(void))(APP_START_ADDRESS);

    fptr();
}

// *****************************************************************************
// *****************************************************************************
// Section: Main Entry Point
// *****************************************************************************
// *****************************************************************************

int main ( void )
{
    /* Never Returns fromm Here */
    jumpToApplication();

    /* Initialize all modules */
    SYS_Initialize ( NULL );


    while ( true )
    {
        /* Maintain state machines of all polled MPLAB Harmony modules. */
        SYS_Tasks ( );
    }

    /* Execution should not come here during normal operation */

    return ( EXIT_FAILURE );
}


/*******************************************************************************
 End of File
*/

