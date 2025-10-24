/*******************************************************************************
  Company:
    Microchip Technology Inc.

  File Name:
    bootloader_storage.c

  Summary:
    Storage for the Bootloader library.

  Description:
    This file contains the Storage definition for the Bootloader library.
*******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2023 Microchip Technology Inc. and its subsidiaries.
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

#include <string.h>
#include "configuration.h"
#include "bootloader/bootloader_usb_device_hid.h"
#include "bootloader_storage.h"

#define APP_PARTITION_SIZE                      (0x100000) /* (1024 * 1024) */

/*
 * Magic value used to validate the metadata content
 */
#define METADATA_MAGIC_VALUE    0x424F4F54u  /*"BOOT"*/

/* metadata used to identify a valid application image */
typedef struct
{
    /* magic value, should be BOOT */
    uint32_t magic;
    
    /* image size, should not exceed APP_PARTITION_SIZE*/
    uint32_t img_size;
    
    /* computed image entry point, fetched from hex record file*/
    uint32_t img_entry;
} BOOTLOADER_IMAGE_META_DATA;

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


typedef struct
{
    bool deviceReady;

    DRV_HANDLE handle;

    /* External Memory image address */
    uint32_t extMemoryImageAddr;

    /* External Memory image size */
    uint32_t extMemoryImageSize;

    /* External Memory metadata address */
    uint32_t extMemoryMetaDataAddr;

    DRV_NAND_FLASH_GEOMETRY geometry;

    /* Programming address */
    uint32_t progAddr;

} BOOTLOADER_DATA;

static uint8_t CACHE_ALIGN fileBuffer[PAGE_SIZE];
static uint32_t memoryAddr;
static uint8_t eof_processed = 0u;

static BOOTLOADER_DATA btlData =
{
    .deviceReady = false,
    .extMemoryImageAddr  = 0x00200000U,
    .extMemoryMetaDataAddr = 0x00180000U,
    .progAddr       = APP_START_ADDRESS,
};


bool bootloader_IsDeviceReady(void)
{
    btlData.deviceReady = false;

    if (DRV_NAND_FLASH_Status(DRV_NAND_FLASH_INDEX) == SYS_STATUS_READY)
    {
        btlData.handle = DRV_NAND_FLASH_Open((SYS_MODULE_INDEX)DRV_NAND_FLASH_INDEX, DRV_IO_INTENT_READWRITE);

        if (btlData.handle != DRV_HANDLE_INVALID)
        {
            if (DRV_NAND_FLASH_GeometryGet(btlData.handle, (void *)&btlData.geometry) == true)
            {
                btlData.deviceReady = true;
            }
        }
    }
    return btlData.deviceReady;
}

void bootloader_ImageSizeSet(uint32_t size)
{
    btlData.extMemoryImageSize = size;
}

void bootloader_Storage_Read(void)
{
    uint32_t pageNum;
    uint32_t blockNum;
    uint32_t readLen = 0U;
    BOOTLOADER_IMAGE_META_DATA meta_data = {.magic = 0xFFFFFFFF, .img_size = 0xFFFFFFFF};
    bool status = false;

    blockNum = btlData.extMemoryMetaDataAddr / btlData.geometry.blockSize;
    pageNum = ((btlData.extMemoryMetaDataAddr / btlData.geometry.pageSize) % (btlData.geometry.blockSize / btlData.geometry.pageSize));

    (void)DRV_NAND_FLASH_SkipBlock_PageRead(btlData.handle, (uint16_t)blockNum, (uint16_t)pageNum, fileBuffer, NULL, false);

    meta_data = *((BOOTLOADER_IMAGE_META_DATA *)(uintptr_t)fileBuffer);
    if (meta_data.magic != METADATA_MAGIC_VALUE)
    {
        return;
    }

    if (meta_data.img_size < APP_PARTITION_SIZE)
    {
        blockNum = btlData.extMemoryImageAddr / btlData.geometry.blockSize;
        pageNum = ((btlData.extMemoryImageAddr / btlData.geometry.pageSize) % (btlData.geometry.blockSize / btlData.geometry.pageSize));

        do
        {
            status = DRV_NAND_FLASH_SkipBlock_PageRead(btlData.handle, (uint16_t)blockNum, (uint16_t)pageNum, fileBuffer, NULL, false);

            (void)memcpy((uint8_t *)btlData.progAddr, fileBuffer, btlData.geometry.pageSize);

            btlData.progAddr += btlData.geometry.pageSize;
            readLen += btlData.geometry.pageSize;
            pageNum++;

            if (pageNum >= (btlData.geometry.blockSize / btlData.geometry.pageSize))
            {
                blockNum++;
                pageNum = 0;
            }

        } while(readLen < meta_data.img_size);
    }
    if (status == true)
    {
        run_Application(APP_START_ADDRESS);
    }
}

static bool bootloader_Storage_Write(uint32_t addr, void *buffer, size_t size)
{
    uint32_t pageNum;
    uint32_t blockNum;
    bool status = false;

    memoryAddr = addr;
    blockNum = memoryAddr / btlData.geometry.blockSize;

    pageNum = ((memoryAddr / btlData.geometry.pageSize) % (btlData.geometry.blockSize / btlData.geometry.pageSize));

    if ((memoryAddr % btlData.geometry.blockSize) == 0U)
    {
        (void)DRV_NAND_FLASH_SkipBlock_BlockErase(btlData.handle, (uint16_t)blockNum, false);
    }
    
    status = DRV_NAND_FLASH_SkipBlock_PageWrite(btlData.handle, (uint16_t)blockNum, (uint16_t)pageNum, buffer, NULL, false);

    memoryAddr += btlData.geometry.pageSize;

    return status;
}

bool bootloader_Storage_CRC_Verify(uint32_t crc)
{
    uint32_t pageNum;
    uint32_t blockNum;
    uint32_t readLen = 0U;
    uint32_t imageBufferSize;
    uint32_t imageSize;
    uint32_t crcGenerate = 0xFFFFFFFFU;
    bool status = false;

    blockNum = btlData.extMemoryImageAddr / btlData.geometry.blockSize;
    pageNum = ((btlData.extMemoryImageAddr / btlData.geometry.pageSize) % (btlData.geometry.blockSize / btlData.geometry.pageSize));

    imageSize = btlData.extMemoryImageSize;
    do
    {
        (void)DRV_NAND_FLASH_SkipBlock_PageRead(btlData.handle, (uint16_t)blockNum, (uint16_t)pageNum, fileBuffer, NULL, false);

        if (imageSize >= btlData.geometry.pageSize)
        {
            imageBufferSize = btlData.geometry.pageSize;
        }
        else
        {
            imageBufferSize = imageSize;
        }
        crcGenerate = bootloader_CRCGenerate(fileBuffer, imageBufferSize, crcGenerate);

        readLen += btlData.geometry.pageSize;
        pageNum++;
        imageSize -= imageBufferSize;

        if ((imageSize == 0U) && (crc == crcGenerate))
        {
            status = true;
            blockNum = btlData.extMemoryMetaDataAddr / btlData.geometry.blockSize;
            pageNum = ((btlData.extMemoryMetaDataAddr / btlData.geometry.pageSize) % (btlData.geometry.blockSize / btlData.geometry.pageSize));

            (void)memcpy(fileBuffer, (uint8_t *)&btlData.extMemoryImageSize, sizeof(btlData.extMemoryImageSize));

            if ((btlData.extMemoryMetaDataAddr % btlData.geometry.blockSize) == 0U)
            {
                (void)DRV_NAND_FLASH_SkipBlock_BlockErase(btlData.handle, (uint16_t)blockNum, false);
            }
            (void)DRV_NAND_FLASH_SkipBlock_PageWrite(btlData.handle, (uint16_t)blockNum, (uint16_t)pageNum, fileBuffer, NULL, false);
            break;
        }

        if (pageNum >= (btlData.geometry.blockSize / btlData.geometry.pageSize))
        {
            blockNum++;
            pageNum = 0;
        }

    } while(readLen < btlData.extMemoryImageSize);

    return status;
}

/*
 * Erase image application partition and metadata partition
 * Should be invoked from host target only via bootloader erase command
 */
bool bootloader_Storage_Erase(void)
{
    if (btlData.geometry.blockSize == 0U) {
        return true;
    }

    const uint32_t bs = btlData.geometry.blockSize;
    bool ok = false;
    
    /* erase image application partition */
    uint32_t start = (uint32_t)btlData.extMemoryImageAddr;
    uint32_t end = start + APP_PARTITION_SIZE - 1U; // last byte in range

    uint32_t first_block = (uint32_t)(start / bs);
    uint32_t last_block  = (uint32_t)(end / bs);

    for (uint32_t blk = first_block; blk <= last_block; ++blk) {

        ok = DRV_NAND_FLASH_SkipBlock_BlockErase(btlData.handle, blk, false);
        if (!ok) {
            return false;
        }
    }
    
    /* erase metadata partition, it is just one block */
    start = (uint32_t)btlData.extMemoryMetaDataAddr;
    first_block = (uint32_t)(start / bs);
    
    ok = DRV_NAND_FLASH_SkipBlock_BlockErase(btlData.handle, first_block, false);
    if (!ok) {
        return false;
    }
    
    return true;
}


#include <inttypes.h> /* for PRIX32 to have a correct format to print uint32_t */

/* flush helper works in OFFSET space (relative to image_base_abs) */
static void flush_page_if_dirty(uint32_t image_base_abs,
                                uint32_t *cur_page_base_off,
                                uint8_t  *page_valid,
                                uint8_t  *page_dirty)
{
    if (*page_valid && *page_dirty)
    {
        const uint32_t addr = image_base_abs + *cur_page_base_off;

        bootloader_Storage_Write(addr, fileBuffer, PAGE_SIZE);
        *page_dirty = 0u;
    }
}

/*
 * Parse hex record file sent line by line from host using bootloader program command
 * compute data offset inside nand flash page based on 16 LSB of the absolute address from hex file -
 * base address inside NAND flash memory
 * fill a page buffer till full and program a page at once
 * at the end program all data received in the page buffer
 * compute metadata and write into NAND flash
 */
HEX_RECORD_STATUS bootloader_Storage_ProgramHexRecord(uint8_t *HexBuf, size_t totalLen)
{
    /* ---- persistent state (session) ---- */
    static uint8_t  s_inited        = 0u;
    static uint32_t extLinAddr      = 0;  /* <<16 */
    static uint32_t extSegAddr      = 0;  /* <<4  */
    static uint32_t min_written_abs = 0xFFFFFFFFu;
    static uint32_t max_written_abs = 0u;
    static uint32_t entry_point     = 0u;
    static uint8_t  entry_seen      = 0u;

    /* Track current NAND page using FULL offset (no 16-bit wrap) */
    static uint32_t cur_page_base_off = 0u;  /* bytes from image_base_abs */
    static uint8_t  page_valid        = 0u;
    static uint8_t  page_dirty        = 0u;

    /* Total DATA bytes actually stored in the slot */
    static uint32_t total_size        = 0u;

    const uint32_t image_base_abs = btlData.extMemoryImageAddr;

    if (!s_inited) {
        
        s_inited            = 1u;
        extLinAddr          = 0;
        extSegAddr          = 0;
        min_written_abs     = 0xFFFFFFFFu;
        max_written_abs     = 0u;
        entry_point         = 0u;
        entry_seen          = 0u;
        cur_page_base_off   = 0u;
        page_valid          = 0u;
        page_dirty          = 0u;
        total_size          = 0u;
        memset(fileBuffer, 0xFF, PAGE_SIZE);
    }

    /* Require exactly one full record per call */
    if (totalLen < 5u){
        return HEX_REC_UNKNOW_TYPE;
    }
    
    const uint8_t  reclen  = HexBuf[0];
    const uint8_t  addr_hi = HexBuf[1];
    const uint8_t  addr_lo = HexBuf[2];
    const uint8_t  rectype = HexBuf[3];
    const size_t   rec_bytes = (size_t)reclen + 5u;
    
    if (totalLen != rec_bytes) {
        return HEX_REC_UNKNOW_TYPE;
    }

    /* Verify Intel-HEX checksum */
    uint8_t sum = 0;
    for (size_t i = 0; i < rec_bytes; i++) {
        sum = (uint8_t)(sum + HexBuf[i]);
    }
    
    if (sum != 0u) {
        return HEX_REC_CRC_ERROR;
    }
    
    const uint8_t *data = &HexBuf[4];

    switch (rectype)
    {

        case DATA_RECORD:
        {
            const uint32_t offs16 = ((uint32_t)addr_hi << 8) | (uint32_t)addr_lo;
            uint32_t abs          = (extLinAddr + extSegAddr + offs16);

            size_t remaining = reclen;
            size_t idx       = 0;

            while (remaining) {
                const uint32_t seg_start_abs = abs;
                uint32_t can                 = (uint32_t)remaining;

                /* Compute NAND offset inside slot; this is what we should gate on */
                uint32_t off = (seg_start_abs - image_base_abs) & 0xffff;   /* unsigned wrap-safe */

                /* If below slot, skip forward until we reach slot start */
                if (seg_start_abs < image_base_abs) {
                    uint32_t skip = image_base_abs - seg_start_abs;
                    if (skip > can) skip = can;
                    abs       += skip;
                    idx       += skip;
                    remaining -= skip;
                    continue;
                }

                /* If at/after slot end, no more data from this line fits */
                if (off >= APP_PARTITION_SIZE) {
                    /* nothing in this or following bytes belongs to the slot */
                    break;
                }

                /* Limit so we don?t cross slot end */
                uint32_t room = APP_PARTITION_SIZE - off;
                if (can > room)
                    can = room;

                /* Paging in OFFSET space */
                const uint32_t page_base_off = off & ~(uint32_t)(PAGE_SIZE - 1u);
                const uint32_t in_page_off   = off &  (uint32_t)(PAGE_SIZE - 1u);

                /* New page? ? flush previous first */
                if (!page_valid || (page_base_off != cur_page_base_off)) {
                    
                    flush_page_if_dirty(image_base_abs, &cur_page_base_off, &page_valid, &page_dirty);
                    memset(fileBuffer, 0xFF, PAGE_SIZE);
                    cur_page_base_off = page_base_off;
                    page_valid        = 1u;
                    page_dirty        = 0u;
                }

                /* Copy that fits in this page */
                uint32_t fit = PAGE_SIZE - in_page_off;
                if (fit > can) {
                    fit = can;
                }

                memcpy(&fileBuffer[in_page_off], &data[idx], fit);
                page_dirty  = 1u;
                total_size += fit;

                if (seg_start_abs < min_written_abs) {
                    min_written_abs = seg_start_abs;
                }
                
                if ((seg_start_abs + fit) > max_written_abs) {
                    max_written_abs = (seg_start_abs + fit);
                }

                abs       += fit;
                idx       += fit;
                remaining -= fit;

                /* Full page ? flush now */
                if (in_page_off + fit == PAGE_SIZE) {
                    
                    flush_page_if_dirty(image_base_abs, &cur_page_base_off, &page_valid, &page_dirty);
                    page_valid = 0u;                 /* force reopen next fragment */
                    memset(fileBuffer, 0xFF, PAGE_SIZE);
                    
                }
            }
            break;
        } 

        /* address context handling */
        case EXT_SEG_ADRS_RECORD:
        {
            
            if (reclen != 2u) {
                return HEX_REC_UNKNOW_TYPE;
            }
            
            extSegAddr = ((((uint32_t)data[0] << 8) | 
                    (uint32_t)data[1]) << 4);
            extLinAddr = 0;
            break;
        } 

        case EXT_LIN_ADRS_RECORD:
        {
            
            if (reclen != 2u) {
                return HEX_REC_UNKNOW_TYPE;
            }
            
            extLinAddr = ((((uint32_t)data[0] << 8) | 
                    (uint32_t)data[1]) << 16);
            extSegAddr = 0;
            break;
        } 

        case START_LIN_ADRS_RECORD:
        { /* Start Linear Address */
            
            if (reclen != 4u) {
                return HEX_REC_UNKNOW_TYPE;
            }
            
            entry_point = ((uint32_t)data[0] << 24) |
                          ((uint32_t)data[1] << 16) |
                          ((uint32_t)data[2] << 8)  |
                           (uint32_t)data[3];
            entry_seen = 1u;
            break;
        }

        /* end of the file - write all accumulated so far in the page buffer
         * compute metadata and write it at requested offset into NAND flash
         * reset for next session, just in case, not recommended anyway
         */
        case END_OF_FILE_RECORD:
        {
            if (!eof_processed) {
                /* Flush trailing partial page */
                flush_page_if_dirty(image_base_abs, &cur_page_base_off, 
                        &page_valid, &page_dirty);

                if (min_written_abs == 0xFFFFFFFFu) {

                    min_written_abs = image_base_abs;
                    max_written_abs = image_base_abs;

                }

                if (!entry_seen) {
                    entry_point = min_written_abs;
                }

                BOOTLOADER_IMAGE_META_DATA meta;
                meta.magic     = METADATA_MAGIC_VALUE;
                meta.img_size  = total_size;    /* bytes actually stored */
                meta.img_entry = entry_point;

                memset(fileBuffer, 0xFF, PAGE_SIZE);
                memcpy(fileBuffer, &meta, sizeof meta);

                bootloader_Storage_Write(btlData.extMemoryMetaDataAddr, fileBuffer, PAGE_SIZE);

                /* reset for next session */
                s_inited = 0u;
                eof_processed = 1u;
                return HEX_REC_NORMAL;
            }
            else{
                // Ignore subsequent EOF records
                return HEX_REC_NORMAL;
            }
        }

        default:
            return HEX_REC_UNKNOW_TYPE;
    }

    return HEX_REC_NORMAL;
}

