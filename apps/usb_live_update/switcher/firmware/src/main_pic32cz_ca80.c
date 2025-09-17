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

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include <stddef.h>                     // Defines NULL
#include <stdbool.h>                    // Defines true
#include <stdlib.h>                     // Defines EXIT_FAILURE
#include "definitions.h"                // SYS function prototypes
#define ASM_VECTOR              asm("bx %0"::"r" (reset_vector))


#define FLASH_START                             (0xC000000UL)
#define FLASH_LENGTH                            (0x800000UL)
#define PAGE_SIZE                               (1024UL)
#define ERASE_BLOCK_SIZE                        (4096UL)
#define PAGES_IN_ERASE_BLOCK                    (ERASE_BLOCK_SIZE / PAGE_SIZE)

#define APP_START_ADDRESS                       FLASH_START

#define MID_OF_FLASH                            (FLASH_LENGTH / 2)

#define LOWER_FLASH_START                       (FLASH_START)
#define LOWER_FLASH_SERIAL_START                (LOWER_FLASH_START + MID_OF_FLASH - PAGE_SIZE)
#define LOWER_FLASH_SERIAL_SECTOR               (LOWER_FLASH_START + MID_OF_FLASH - ERASE_BLOCK_SIZE)

#define UPPER_FLASH_START                       (FLASH_START + MID_OF_FLASH)
#define UPPER_FLASH_SERIAL_START                (UPPER_FLASH_START + MID_OF_FLASH - PAGE_SIZE)
#define UPPER_FLASH_SERIAL_SECTOR               (UPPER_FLASH_START + MID_OF_FLASH - ERASE_BLOCK_SIZE)

#define FLASH_SERIAL_PROLOGUE                   0xDEADBEEFU
#define FLASH_SERIAL_EPILOGUE                   0xBEEFDEADU
#define FLASH_SERIAL_CLEAR                      0xFFFFFFFFU

#define LOWER_FLASH_SERIAL_READ                 ((T_FLASH_SERIAL *)LOWER_FLASH_SERIAL_START)
#define UPPER_FLASH_SERIAL_READ                 ((T_FLASH_SERIAL *)UPPER_FLASH_SERIAL_START)

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
void bootloader_UpdateFlashSerial(uint32_t serial, uint32_t addr)
{
    update_flash_serial.serial    = serial;
    update_flash_serial.prologue  = FLASH_SERIAL_PROLOGUE;
    update_flash_serial.epilogue  = FLASH_SERIAL_EPILOGUE;

    while (FCW_IsBusy()) { /* wait */ }

    (void)FCW_RowWrite((uint32_t *)&update_flash_serial, addr);

    while (FCW_IsBusy()) { /* wait */ }
}

/* Function to swap the banks.
 * This function has to be removed once NVM PLIB has the support 
 */
static void bootloader_ProgramFlashSwapBank( PROGRAM_FLASH_BANK flash_bank )
{


    if (flash_bank == PROGRAM_FLASH_BANK_1)
    {
        FCW_ProgramFlashBankSelect(PROGRAM_FLASH_BANK_1);
    }
    else
    {
        FCW_ProgramFlashBankSelect(PROGRAM_FLASH_BANK_2);
    }
}

/* Function to Select Appropriate program flash bank based on the serial number */
void programFlashBankSelect( void )
{
    /* Map Program Flash Bank 1 to lower region after a reset */
    bootloader_ProgramFlashSwapBank(PROGRAM_FLASH_BANK_1);

    T_FLASH_SERIAL *lower_flash_serial = LOWER_FLASH_SERIAL_READ;
    T_FLASH_SERIAL *upper_flash_serial = UPPER_FLASH_SERIAL_READ;

    /* If Both Flash Panels do not have any Serial number */
    if( lower_flash_serial->prologue == FLASH_SERIAL_CLEAR &&
        upper_flash_serial->prologue == FLASH_SERIAL_CLEAR)
    {
        /* Program Checksum and initial ID's for both panels*/
        bootloader_UpdateFlashSerial(0, LOWER_FLASH_SERIAL_START);
        bootloader_UpdateFlashSerial(0, UPPER_FLASH_SERIAL_START);
    }
    /* If both the panels have proper checksum and serial number*/
    else if((lower_flash_serial->prologue == FLASH_SERIAL_PROLOGUE) &&
        (lower_flash_serial->epilogue == FLASH_SERIAL_EPILOGUE) &&
        (upper_flash_serial->prologue == FLASH_SERIAL_PROLOGUE) &&
        (upper_flash_serial->epilogue == FLASH_SERIAL_EPILOGUE))
    {
        /* If Upper flash panel has latest firmware */
        if(upper_flash_serial->serial > lower_flash_serial->serial)
        {
            /* Map Program Flash Bank 2 to lower region */
            bootloader_ProgramFlashSwapBank(PROGRAM_FLASH_BANK_2);

            /* Perform Dummy Read of Inactive panel(Upper Flash) after BankSwap
             * for Swap to take effect
             */
            dummy_read = *(uint32_t *)(UPPER_FLASH_START);
        }
    }
    /* Fallback Case when Panel 1 checksum and serial number is corrupted */
    else if((upper_flash_serial->prologue == FLASH_SERIAL_PROLOGUE) &&
            (upper_flash_serial->epilogue == FLASH_SERIAL_EPILOGUE))
    {
        /* Map Program Flash Bank 2 to lower region */
        bootloader_ProgramFlashSwapBank(PROGRAM_FLASH_BANK_2);

        /* Perform Dummy Read of Inactive panel(Upper Flash) after BankSwap
         * for Swap to take effect
         */
        dummy_read = *(uint32_t *)(UPPER_FLASH_START);
    }
    else
    {
        /* Do Nothing */
 	 }
}

void CLOCK_DeInitialize(void)
{
 
    //Moving main clock to DFLL
    GCLK_REGS->GCLK_GENCTRL[0] = GCLK_GENCTRL_DIV(1) | GCLK_GENCTRL_SRC(GCLK_GENCTRL_SRC_DFLL_Val) | GCLK_GENCTRL_GENEN_Msk;
    while((GCLK_REGS->GCLK_SYNCBUSY & GCLK_SYNCBUSY_GENCTRL0_Msk) == GCLK_SYNCBUSY_GENCTRL0_Msk)
    {
        /* Wait for the Generator 0 synchronization */
    }
    
      // Disable PLL0 control
    OSCCTRL_REGS->OSCCTRL_PLL0CTRL &= ~OSCCTRL_PLL0CTRL_ENABLE_Msk;
    
    
    
  
}

/* Fill this function to release or De-Initialize all the resources used 
 * It will be called by bootloader before jumping into application
 */
void SYS_DeInitialize(void *data)
{
    /* Reset CLOCK as it will Re-Initialized in application space */
    CLOCK_DeInitialize();
}

void run_Application(uint32_t address)
{
    uint32_t msp            = *(uint32_t *)(address);
    uint32_t reset_vector   = *(uint32_t *)(address + 4U);

    if (msp == 0xffffffffU)
    {
        return;
    }

    /* Call Deinitialize routine to free any resources acquired by Bootloader */
   // SYS_DeInitialize(NULL);

    __set_MSP(msp);

    ASM_VECTOR;
}

void jumpToApplication( void )
{
    /* Select Program Flash Bank with latest Firmware */
    programFlashBankSelect();

    /* Set default to APP_START_ADDRESS */
    run_Application(APP_START_ADDRESS);
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

