/*******************************************************************************
  File Name:
    bootloader_nvm_interface.h

  Summary:
    NVM Interface function definitions.

  Description:
    This file contains the definitions needed for PLIB usage of the Flash
    Controller.
 *******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2020 Microchip Technology Inc. and its subsidiaries.
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

#ifndef _BOOTLOADER_NVM_INTERFACE_H
#define _BOOTLOADER_NVM_INTERFACE_H

#ifdef __cplusplus
    extern "C" {
#endif

#include <stdint.h>
#include <stdbool.h>
#include "sys/kmem.h"

#define FLASH_START             (0x9d000000UL)
#define FLASH_LENGTH            (0x200000UL)
#define PAGE_SIZE               (2048UL)
#define ERASE_BLOCK_SIZE        (16384UL)
#define PAGES_IN_ERASE_BLOCK    (ERASE_BLOCK_SIZE / PAGE_SIZE)

/* Starting location of Bootloader in Inactive bank */
#define INACTIVE_BANK_OFFSET    (FLASH_LENGTH / 2)

#define INACTIVE_BANK_START     (FLASH_START + INACTIVE_BANK_OFFSET)

#define APP_START_ADDRESS       INACTIVE_BANK_START

#define FLASH_END_ADDRESS       (INACTIVE_BANK_START + INACTIVE_BANK_OFFSET)

#define LOWER_FLASH_START               (FLASH_START)
#define LOWER_FLASH_SERIAL_START        (LOWER_FLASH_START + (FLASH_LENGTH / 2) - PAGE_SIZE)
#define LOWER_FLASH_SERIAL_SECTOR       (LOWER_FLASH_START + (FLASH_LENGTH / 2) - ERASE_BLOCK_SIZE)

#define UPPER_FLASH_START               INACTIVE_BANK_START
#define UPPER_FLASH_SERIAL_START        (FLASH_END_ADDRESS - PAGE_SIZE)
#define UPPER_FLASH_SERIAL_SECTOR       (FLASH_END_ADDRESS - ERASE_BLOCK_SIZE)

#define FLASH_SERIAL_PROLOGUE           0xDEADBEEF
#define FLASH_SERIAL_EPILOGUE           0xBEEFDEAD
#define FLASH_SERIAL_CLEAR              0xFFFFFFFF

#define LOWER_FLASH_SERIAL_READ         ((T_FLASH_SERIAL *)KVA0_TO_KVA1(LOWER_FLASH_SERIAL_START))
#define UPPER_FLASH_SERIAL_READ         ((T_FLASH_SERIAL *)KVA0_TO_KVA1(UPPER_FLASH_SERIAL_START))

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

#define DATA_RECORD             0
#define END_OF_FILE_RECORD      1
#define EXT_SEG_ADRS_RECORD     2
#define EXT_LIN_ADRS_RECORD     4
#define START_LIN_ADRS_RECORD   5

typedef enum
{
    // indicates that the CRC value between the calculated value and the
    // value received from data stream did not match
    HEX_REC_CRC_ERROR   = -10,

    // programming error
    HEX_REC_PGM_ERROR   = -5,

    // An unspecified hex record tyype is received
    HEX_REC_UNKNOW_TYPE = -1,

    // the record type is a valid hex record
    HEX_REC_NORMAL      = 0,
} HEX_RECORD_STATUS;

HEX_RECORD_STATUS bootloader_NvmProgramHexRecord(uint8_t* HexRecord, uint32_t totalLen);

void bootloader_NvmAppErase(void);

void bootloader_NvmPageWrite(uint32_t address, uint32_t* data);

bool bootloader_NvmIsBusy(void);

void bootloader_NvmUpdateFlashSerial(uint32_t addr);

#ifdef  __cplusplus
}
#endif

#endif //_BOOTLOADER_NVM_INTERFACE_H
