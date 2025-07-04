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

#include "system/fs/sys_fs_fat_interface.h"
#include "system/fs/sys_fs.h"

typedef struct
{
    bool inUse;
    FATFS volObj;
} FATFS_VOLUME_OBJECT;

typedef struct
{
    bool inUse;
    FIL fileObj;
} FATFS_FILE_OBJECT;

typedef struct
{
    bool inUse;
    DIR dirObj;
} FATFS_DIR_OBJECT;

static FATFS_VOLUME_OBJECT CACHE_ALIGN FATFSVolume[SYS_FS_VOLUME_NUMBER];
static FATFS_FILE_OBJECT CACHE_ALIGN FATFSFileObject[SYS_FS_MAX_FILES];
static FATFS_DIR_OBJECT CACHE_ALIGN FATFSDirObject[SYS_FS_MAX_FILES];
static uint8_t startupflag = 0;

int FATFS_mount ( uint8_t vol )
{
    FATFS *fs = NULL;
    FRESULT res = FR_INT_ERR;
    TCHAR path[3];
    BYTE opt = 1; /* 0:Do not mount (delayed mount), 1:Mount immediately */

    uint8_t index = 0;

    if(0U == startupflag)
    {
        startupflag = 1;
        for(index = 0; index != SYS_FS_VOLUME_NUMBER ; index++ )
        {
            FATFSVolume[index].inUse = false;
        }
        for(index = 0; index != SYS_FS_MAX_FILES ; index++ )
        {
            FATFSFileObject[index].inUse = false;
            FATFSDirObject[index].inUse = false;
        }
    }

    /* Check if the drive number is valid */
    if (vol >= (uint8_t)SYS_FS_VOLUME_NUMBER)
    {
        return (int)FR_INVALID_DRIVE;
    }

    /* If the volume specified is already in use, then return failure, as we cannot mount it again */
    if(FATFSVolume[vol].inUse == true)
    {
        return (int)FR_INVALID_DRIVE;
    }
    else
    {
        fs = &FATFSVolume[vol].volObj;
    }

    path[0] = '0' + vol;
    path[1] = ':';
    path[2] = '\0';

    res = f_mount(fs, (const TCHAR *)&path, opt);

    if ((res == FR_OK) || (res == FR_NO_FILESYSTEM))
    {
        FATFSVolume[vol].inUse = true;
    }

    return ((int)res);
}

int FATFS_unmount ( uint8_t vol )
{
    FRESULT res = FR_INT_ERR;
    TCHAR path[3];
    BYTE opt = 0;
    uint32_t hFATfs =0;

    if (vol >= SYS_FS_VOLUME_NUMBER)
    {
        return (int)FR_INVALID_DRIVE;
    }

    /* If the volume specified not in use, then return failure, as we cannot unmount mount a free volume */
    if(FATFSVolume[vol].inUse == false)
    {
        return (int)FR_INVALID_DRIVE;
    }

    path[0] = '0' + vol;
    path[1] = ':';
    path[2] = '\0';

    res = f_mount(NULL, (const TCHAR *)&path, opt);

    if (res == FR_OK)
    {
        // free the volume
        FATFSVolume[vol].inUse = false;

        for(hFATfs = 0; hFATfs < SYS_FS_MAX_FILES; hFATfs++)
        {
            if(FATFSFileObject[hFATfs].inUse != false)
            {
                if (FATFSFileObject[hFATfs].fileObj.obj.fs == NULL)
                {
                    FATFSFileObject[hFATfs].inUse = false;
                }
                else if(VolToPart[vol].pd == FATFSFileObject[hFATfs].fileObj.obj.fs->pdrv)
                {
                    FATFSFileObject[hFATfs].inUse = false;
                }
                else
                {
                    /* Nothing to do */
                }
            }
            if(FATFSDirObject[hFATfs].inUse != false)
            {
                if (FATFSDirObject[hFATfs].dirObj.obj.fs == NULL)
                {
                    FATFSDirObject[hFATfs].inUse = false;
                }
                else if(VolToPart[vol].pd == FATFSDirObject[hFATfs].dirObj.obj.fs->pdrv)
                {
                    FATFSDirObject[hFATfs].inUse = false;
                }
                else
                {
                    /* Nothing to do */
                }
            }
        }
    }

    return ((int)res);
}

/* MISRA C-2012 Rule 2.1 deviated:1 Deviation record ID -  H3_MISRAC_2012_R_2_1_DR_1 */

int FATFS_open (
    uintptr_t handle,   /* Pointer to the blank file object */
    const char * path,  /* Pointer to the file name */
    uint8_t mode        /* Access mode and file open mode flags */
)
{
    FRESULT res = FR_INT_ERR;
    uint32_t index = 0;
    FIL *fp = NULL;
    SYS_FS_FILE_OPEN_ATTRIBUTES modeCheck = (SYS_FS_FILE_OPEN_ATTRIBUTES)mode;

    /* Convert the SYS_FS file open attributes to FAT FS attributes */
    switch(modeCheck)
    {
        case SYS_FS_FILE_OPEN_READ:
            mode = (uint8_t)FA_READ;
            break;
        default:
            return ((int)res);
            break;
    }

    for (index = 0; index < SYS_FS_MAX_FILES; index++)
    {
        if(FATFSFileObject[index].inUse == false)
        {
            FATFSFileObject[index].inUse = true;
            fp = &FATFSFileObject[index].fileObj;
            *(uintptr_t *)handle = (uintptr_t)&FATFSFileObject[index];
            break;
        }
    }

    if (index < SYS_FS_MAX_FILES)
    {
        res = f_open(fp, (const TCHAR *)path, mode);

        if (res != FR_OK)
        {
           FATFSFileObject[index].inUse = false;
        }
    }

    return ((int)res);
}

/* MISRAC 2012 deviation block end */

/* MISRA C-2012 Rule 11.3 deviated:1 Deviation record ID -  H3_MISRAC_2012_R_11_3_DR_1 */

int FATFS_read (
    uintptr_t handle, /* Pointer to the file object */
    void* buff,       /* Pointer to data buffer */
    uint32_t btr,     /* Number of bytes to read */
    uint32_t* br      /* Pointer to number of bytes read */
)
{
    FRESULT res = FR_INT_ERR;
    FATFS_FILE_OBJECT *ptr = (FATFS_FILE_OBJECT *)handle;
    FIL *fp = &ptr->fileObj;

    res = f_read(fp, buff, (UINT)btr, (UINT *)br);

    return ((int)res);
}

/* MISRAC 2012 deviation block end */

int FATFS_close (
    uintptr_t handle /* Pointer to the file object to be closed */
)
{
    FRESULT res;
    FATFS_FILE_OBJECT *ptr = (FATFS_FILE_OBJECT *)handle;
    FIL *fp = &ptr->fileObj;

    if(ptr->inUse == false)
    {
        return (int)FR_INVALID_OBJECT;
    }

    res = f_close(fp);

    if (res == FR_OK)
    {
        ptr->inUse = false;
    }
    return ((int)res);
}

int FATFS_lseek (
    uintptr_t handle,   /* Pointer to the file object */
    FSIZE_t ofs         /* File pointer from top of file */
)
{
    FRESULT res;
    FATFS_FILE_OBJECT *ptr = (FATFS_FILE_OBJECT *)handle;
    FIL *fp = &ptr->fileObj;

    res = f_lseek(fp, ofs);

    return ((int)res);
}

int FATFS_stat (
    const char* path,   /* Pointer to the file path */
    uintptr_t fileInfo  /* Pointer to file information to return */
)
{
    FRESULT res;
    FILINFO *finfo = (FILINFO *)fileInfo;

    res = f_stat((const TCHAR *)path, finfo);

    if (finfo != NULL)
    {
        SYS_FS_FSTAT *fileStat = (SYS_FS_FSTAT *)fileInfo;

        if ((res == FR_OK) && (fileStat->lfname != NULL))
        {
            /* Use fileStat->fname instead */
            fileStat->lfname[0] = '\0';
        }
    }

    return ((int)res);
}

int FATFS_getlabel (
    const char* path,  /* Path name of the logical drive number */
    char* label,       /* Pointer to a buffer to return the volume label */
    uint32_t* vsn           /* Pointer to a variable to return the volume serial number */
)
{
    FRESULT res;

    res = f_getlabel((const TCHAR *)path, (TCHAR *)label, (DWORD *)vsn);

    return ((int)res);
}

int FATFS_getcwd (
    char* buff,    /* Pointer to the directory path */
    uint32_t len    /* Size of path */
)
{
    FRESULT res;
    res = f_getcwd((TCHAR *)buff, (UINT)len);

    return ((int)res);
}

char* FATFS_gets (
    char* buff,    /* Pointer to the string buffer to read */
    int len,        /* Size of string buffer (characters) */
    uintptr_t handle/* Pointer to the file object */
)
{
    FATFS_FILE_OBJECT *ptr = (FATFS_FILE_OBJECT *)handle;
    FIL *fp = &ptr->fileObj;

    return ((char *)f_gets((TCHAR *)buff, len, fp));
}

int FATFS_opendir (
    uintptr_t handle,           /* Pointer to directory object to create */
    const char* path   /* Pointer to the directory path */
)
{
    FRESULT res;
    uint32_t index = 0;
    DIR *dp = NULL;

    for(index = 0; index < SYS_FS_MAX_FILES; index++)
    {
        if(FATFSDirObject[index].inUse == false)
        {
            FATFSDirObject[index].inUse = true;
            dp = &FATFSDirObject[index].dirObj;
            *(uintptr_t *)handle = (uintptr_t)&FATFSDirObject[index];
            break;
        }
    }

    if(index >= SYS_FS_MAX_FILES)
    {
        return (int)FR_INVALID_OBJECT;
    }

    res = f_opendir(dp, (const TCHAR *)path);

    if (res != FR_OK)
    {
        FATFSDirObject[index].inUse = false;
    }

    return ((int)res);
}

int FATFS_readdir (
    uintptr_t handle,   /* Pointer to the open directory object */
    uintptr_t fileInfo  /* Pointer to file information to return */
)
{
    FRESULT res;
    FATFS_DIR_OBJECT *ptr = (FATFS_DIR_OBJECT *)handle;
    DIR *dp = &ptr->dirObj;

    FILINFO *finfo = (FILINFO *)fileInfo;

    res = f_readdir(dp, finfo);

    if (finfo != NULL)
    {
        SYS_FS_FSTAT *fileStat = (SYS_FS_FSTAT *)fileInfo;

        if ((res == FR_OK) && (fileStat->lfname != NULL))
        {
            /* Use fileStat->fname instead */
            fileStat->lfname[0] = '\0';
        }
    }

    return ((int)res);
}

int FATFS_closedir (
    uintptr_t handle /* Pointer to the directory object to be closed */
)
{
    FRESULT res;
    FATFS_DIR_OBJECT *ptr = (FATFS_DIR_OBJECT *)handle;
    DIR *dp = &ptr->dirObj;

    if(ptr->inUse ==  false)
    {
        return (int)FR_INVALID_OBJECT;
    }

    res = f_closedir(dp);

    if (res == FR_OK)
    {
        ptr->inUse = false;
    }

    return ((int)res);
}

int FATFS_chdir (
    const char* path   /* Pointer to the directory path */
)
{
    FRESULT res;

    res = f_chdir((const TCHAR *)path);

    return ((int)res);
}

int FATFS_chdrive (
    uint8_t drv     /* Drive number */
)
{
    FRESULT res;
    TCHAR path[3];

    path[0] = '0' + drv;
    path[1] = ':';
    path[2] = '\0';

    res = f_chdrive((const TCHAR *)&path);

    return ((int)res);
}

