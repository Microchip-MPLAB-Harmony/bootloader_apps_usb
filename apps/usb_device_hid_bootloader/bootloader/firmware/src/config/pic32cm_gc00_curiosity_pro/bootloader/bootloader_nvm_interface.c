/*******************************************************************************
  MPLAB Harmony Bootloader NVM Interface Source File

  Company:
    Microchip Technology Inc.

  File Name:
    bootloader_nvm_interface.c

  Summary:
    This file contains the source code for handling NVM controllers.

  Description:
    This file contains the source code for the NVM handling functions.
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

#include <string.h>
#include "configuration.h"
#include "bootloader/bootloader_common.h"
#include "bootloader/bootloader_nvm_interface.h"
#include "peripheral/fcw/plib_fcw.h"
#include "system/int/sys_int.h"


typedef struct
{
    uint8_t RecDataLen;
    uint32_t Address;
    uint8_t RecType;
    uint8_t* Data;
    uint8_t CheckSum;
    uint32_t ExtSegAddress;
    uint32_t ExtLinAddress;
} T_HEX_RECORD;

typedef struct {
    uint32_t progAddr;
    uint32_t prevAddr;
    uint32_t prevLen;
    uint32_t buffIndex;
    uint8_t CACHE_ALIGN buff[PAGE_SIZE];
} T_NVM_DATA;

static T_NVM_DATA CACHE_ALIGN nvm_data =
{
    .progAddr = APP_START_ADDRESS,
    .prevAddr = APP_START_ADDRESS
};

static bool nvmDataInitDone = false;

bool bootloader_NvmIsBusy(void)
{
    return (FCW_IsBusy());
}


void bootloader_NvmAppErase( uint32_t startAddr, uint32_t endAddr )
{
    uint32_t flashAddr = startAddr;

    while (flashAddr < endAddr)
    {
        (void)FCW_PageErase(flashAddr);

        while(bootloader_NvmIsBusy() == true)
        {

        }

        flashAddr += ERASE_BLOCK_SIZE;
    }
}

void bootloader_NVMPageWrite(uint32_t address, uint8_t* data)
{
    (void)FCW_RowWrite((void *)data, address);

    while(bootloader_NvmIsBusy() == true)
    {

    }
}

static void bootloader_AlignProgAddress(uint32_t curAddress)
{
    /* Program the pending bytes if any in the buffer */
    if (nvm_data.buffIndex != 0U)
    {
        nvm_data.buffIndex = 0U;


        bootloader_NVMPageWrite(nvm_data.progAddr, nvm_data.buff);

        (void)memset((void *)nvm_data.buff, 0xFF, PAGE_SIZE);
    }

    /* Update the program address to start of page in which curAddress Falls */
    nvm_data.progAddr = curAddress - (curAddress % PAGE_SIZE);
}

HEX_RECORD_STATUS bootloader_NvmProgramHexRecord(uint8_t* HexRecord, uint32_t totalLen)
{
    static T_HEX_RECORD HexRecordSt;
    uint8_t Checksum = 0;
    uint32_t i;
    uint32_t curDataLen = 0;
    uint32_t curAddress = 0;
    uint32_t alignLength = 0;
    uint32_t nextRecStartPt = 0;

    if (nvmDataInitDone == false)
    {
        /* Set the nvm buffer to 0xFF for first record data if less than PAGE_SIZE */
        (void)memset((void *)nvm_data.buff, 0xFF, PAGE_SIZE);

        nvmDataInitDone = true;
    }

    while(totalLen >= 5U) // A hex record must be at-least 5 bytes. (1 Data Len byte + 1 rec type byte+ 2 address bytes + 1 crc)
    {
        HexRecord = &HexRecord[nextRecStartPt];
        HexRecordSt.RecDataLen = HexRecord[0];
        HexRecordSt.RecType = HexRecord[3];
        HexRecordSt.Data = &HexRecord[4];

        //Determine next record starting point.
        nextRecStartPt = (uint32_t)HexRecordSt.RecDataLen + 5U;

        // Decrement total hex record length by length of current record.
        totalLen = totalLen - nextRecStartPt;

        // Hex Record checksum check.
        Checksum = 0U;
        for(i = 0U; i < ((uint32_t)HexRecordSt.RecDataLen + 5U); i++)
        {
            Checksum += HexRecord[i];
        }

        if(Checksum != 0U)
        {
            return HEX_REC_CRC_ERROR;
        }
        else
        {
            // Hex record checksum OK.
            switch(HexRecordSt.RecType)
            {
                case DATA_RECORD:  //Record Type 00, data record.
                    HexRecordSt.Address = ((uint32_t)HexRecord[1] << 8U) + (uint32_t)HexRecord[2];

                    // Derive the address.
                    HexRecordSt.Address = HexRecordSt.Address + HexRecordSt.ExtLinAddress + HexRecordSt.ExtSegAddress;

                    while(HexRecordSt.RecDataLen != 0U) // Loop till all bytes are done.
                    {
                        curAddress = (uint32_t)HexRecordSt.Address;


                        // Make sure we are writing in the desired application memory space.
                        if((curAddress >= APP_START_ADDRESS) && (curAddress <= FLASH_END_ADDRESS))
                        {
                            /* Initiate write and Align the program address to next page
                             * when we have received Page size of data
                             */
                            if (nvm_data.buffIndex == PAGE_SIZE)
                            {
                                bootloader_AlignProgAddress(curAddress);
                            }

                            /* When the current address is not contiguous with previous address
                             * align the Program Address and Buffer Index
                             */
                            if ((nvm_data.prevAddr + nvm_data.prevLen) != curAddress)
                            {
                                alignLength = curAddress - (nvm_data.prevAddr + nvm_data.prevLen);

                                if ((nvm_data.buffIndex + alignLength) >= PAGE_SIZE)
                                {
                                    bootloader_AlignProgAddress(curAddress);
                                }

                                nvm_data.buffIndex = (curAddress % PAGE_SIZE);
                            }

                            curDataLen = HexRecordSt.RecDataLen;

                            if ((nvm_data.buffIndex + HexRecordSt.RecDataLen) > PAGE_SIZE)
                            {
                                curDataLen = PAGE_SIZE - nvm_data.buffIndex;
                            }

                            if (curDataLen > 0U)
                            {
                                (void)memcpy(&nvm_data.buff[nvm_data.buffIndex], HexRecordSt.Data, curDataLen);
                            }

                            nvm_data.buffIndex += curDataLen;
                            nvm_data.prevAddr = curAddress;
                            nvm_data.prevLen = curDataLen;

                            HexRecordSt.Address += curDataLen;
                            HexRecordSt.Data += curDataLen;
                            HexRecordSt.RecDataLen -= (uint8_t)curDataLen;
                        }
                        else    // Out of boundaries. Adjust and move on.
                        {
                            // Increment the address.
                            HexRecordSt.Address += 4U;
                            // Increment the data pointer.
                            HexRecordSt.Data += 4U;
                            // Decrement data len.
                            if(HexRecordSt.RecDataLen > 3U)
                            {
                                HexRecordSt.RecDataLen -= 4U;
                            }
                            else
                            {
                                HexRecordSt.RecDataLen = 0U;
                            }
                        }
                    }
                    break;

                case EXT_SEG_ADRS_RECORD:  // Record Type 02, defines 4th to 19th bits of the data address.
                    HexRecordSt.ExtSegAddress = ((uint32_t)HexRecordSt.Data[0] << 12U) + ((uint32_t)HexRecordSt.Data[1] << 4U);

                    // Reset linear address.
                    HexRecordSt.ExtLinAddress = 0;
                    break;

                case EXT_LIN_ADRS_RECORD:   // Record Type 04, defines 16th to 31st bits of the data address.
                    HexRecordSt.ExtLinAddress = ((uint32_t)HexRecordSt.Data[0] << 24U) + ((uint32_t)HexRecordSt.Data[1] << 16U);

                    // Reset segment address.
                    HexRecordSt.ExtSegAddress = 0;
                    break;

                case END_OF_FILE_RECORD:  //Record Type 01, defines the end of file record.
                    /* Program the remaining bytes if any */
                    if(nvm_data.buffIndex > 0U)
                    {
                        bootloader_NVMPageWrite(nvm_data.progAddr, nvm_data.buff);

                        nvm_data.buffIndex = nvm_data.prevLen = 0;

                        nvm_data.progAddr = nvm_data.prevAddr = APP_START_ADDRESS;

                        (void)memset((void *)nvm_data.buff, 0xFF, PAGE_SIZE);
                    }

                    HexRecordSt.ExtSegAddress = 0;
                    HexRecordSt.ExtLinAddress = 0;
                    break;

                case START_LIN_ADRS_RECORD:
                default:
                    HexRecordSt.ExtSegAddress = 0;
                    HexRecordSt.ExtLinAddress = 0;
                    break;
            }

        }
    }

    if ( (HexRecordSt.RecType == (uint8_t)DATA_RECORD) || (HexRecordSt.RecType == (uint8_t)EXT_SEG_ADRS_RECORD)
            || (HexRecordSt.RecType == (uint8_t)EXT_LIN_ADRS_RECORD) || (HexRecordSt.RecType == (uint8_t)START_LIN_ADRS_RECORD)
            || (HexRecordSt.RecType == (uint8_t)END_OF_FILE_RECORD))
    {
        return HEX_REC_NORMAL;
    }
    else
    {
        return HEX_REC_UNKNOW_TYPE;
    }
}
