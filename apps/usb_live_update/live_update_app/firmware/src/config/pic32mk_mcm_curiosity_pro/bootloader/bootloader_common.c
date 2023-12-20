/*******************************************************************************
  Bootloader Common Source File

  File Name:
    bootloader_common.c

  Summary:
    This file contains common definitions and functions.

  Description:
    This file contains common definitions and functions.
 *******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2019 Microchip Technology Inc. and its subsidiaries.
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
// Section: Include Files
// *****************************************************************************
// *****************************************************************************

#include "bootloader_common.h"

// *****************************************************************************
// *****************************************************************************
// Section: Type Definitions
// *****************************************************************************
// *****************************************************************************

/* Bootloader Major and Minor version sent for a Read Version command (MAJOR.MINOR)*/
#define BTL_MAJOR_VERSION       3U
#define BTL_MINOR_VERSION       7U
#define ASM_VECTOR              asm("bx %0"::"r" (reset_vector))

#define WORD_ALIGN_MASK         (~(sizeof(uint32_t) - 1U))

// *****************************************************************************
// *****************************************************************************
// Section: Global objects
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
// *****************************************************************************
// Section: Bootloader Local Functions
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
// *****************************************************************************
// Section: Bootloader Global Functions
// *****************************************************************************
// *****************************************************************************

/* MISRA C-2012 Rule 8.6 and 5.8 deviated below. Deviation record ID -
   H3_MISRAC_2012_R_8_6_DR_1, H3_MISRAC_2012_R_5_8_DR_1 */

void __WEAK SYS_DeInitialize( void *data )
{
    /* Function can be overriden with custom implementation */
}

uint16_t __WEAK bootloader_GetVersion( void )
{
    /* Function can be overriden with custom implementation */
    uint16_t btlVersion = (((BTL_MAJOR_VERSION & (uint16_t)0xFFU) << 8) | (BTL_MINOR_VERSION & (uint16_t)0xFFU));

    return btlVersion;
}


/* MISRA C-2012 Rule 10.1, 10.4, 11.1, 11.6 deviated below. Deviation record ID -
   H3_MISRAC_2012_R_10_1_DR_1, H3_MISRAC_2012_R_10_4_DR_1, H3_MISRAC_2012_R_11_1_DR_1 & H3_MISRAC_2012_R_11_6_DR_1 */


/* Function to Generate CRC by reading the firmware programmed into internal flash */
uint32_t bootloader_CRCGenerate(uint32_t start_addr, uint32_t size)
{
    uint32_t   i, j, value;
    uint32_t   crc_tab[256];
    uint32_t   crc = 0xffffffffU;
    uint8_t    data;

    for (i = 0; i < 256U; i++)
    {
        value = i;

        for (j = 0; j < 8U; j++)
        {
            if ((value & 1U) != 0U)
            {
                value = (value >> 1) ^ 0xEDB88320U;
            }
            else
            {
                value >>= 1;
            }
        }
        crc_tab[i] = value;
    }

    for (i = 0; i < size; i++)
    {
        data = *(uint8_t *)KVA0_TO_KVA1((start_addr + i));

        crc = crc_tab[(crc ^ data) & 0xffU] ^ (crc >> 8);
    }

    return crc;
}


/* Trigger a reset */
void bootloader_TriggerReset(void)
{
    /* Perform system unlock sequence */
    SYSKEY = 0x00000000U;
    SYSKEY = 0xAA996655U;
    SYSKEY = 0x556699AAU;

    RSWRSTSET = _RSWRST_SWRST_MASK;
    (void)RSWRST;
}


static T_FLASH_SERIAL CACHE_ALIGN  update_flash_serial;

/* Function to read the Serial number from Flash bank mapped to lower region */
uint32_t bootloader_GetLowerFlashSerial(void)
{
    T_FLASH_SERIAL *lower_flash_serial = LOWER_FLASH_SERIAL_READ;

    return (lower_flash_serial->serial);
}

/* Function to update the serial number based on address */
void bootloader_UpdateFlashSerial(uint32_t serial, uint32_t addr)
{
    update_flash_serial.serial         = serial;
    update_flash_serial.prologue       = FLASH_SERIAL_PROLOGUE;
    update_flash_serial.epilogue       = FLASH_SERIAL_EPILOGUE;

    (void)NVM_QuadWordWrite((void *)&update_flash_serial, addr);

    while(NVM_IsBusy() == true)
    {
       /* Nothing to do */
    }
}

/* Function to update the serial number in upper flash panel (Inactive Panel) */
void bootloader_UpdateUpperFlashSerial(void)
{
    uint32_t upper_flash_serial;

    /* Increment Upper Mapped Flash panel serial by 1 to be ahead of the
     * current running Lower Mapped Flash panel serial
     */
    upper_flash_serial = bootloader_GetLowerFlashSerial() + 1;

    bootloader_UpdateFlashSerial(upper_flash_serial, UPPER_FLASH_SERIAL_START);
}

void bootloader_SwapAndReset( void )
{
    /* Update Serial number of Inactive bank */
    bootloader_UpdateUpperFlashSerial();

    bootloader_TriggerReset();
}

/* MISRAC 2012 deviation block end */