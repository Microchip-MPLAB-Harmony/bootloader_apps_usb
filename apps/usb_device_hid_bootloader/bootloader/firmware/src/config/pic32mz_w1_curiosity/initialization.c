/*******************************************************************************
  System Initialization File

  File Name:
    initialization.c

  Summary:
    This file contains source code necessary to initialize the system.

  Description:
    This file contains source code necessary to initialize the system.  It
    implements the "SYS_Initialize" function, defines the configuration bits,
    and allocates any necessary global system resources,
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
// Section: Included Files
// *****************************************************************************
// *****************************************************************************
#include "configuration.h"
#include "definitions.h"
#include "device.h"


// ****************************************************************************
// ****************************************************************************
// Section: Configuration Bits
// ****************************************************************************
// ****************************************************************************

/*** FBCFG0 ***/
#pragma config BUHSWEN =    OFF
#pragma config PCSCMODE =    DUAL
#pragma config BOOTISA =    MIPS32


/*** DEVCFG0 ***/
#pragma config TDOEN =      ON
#pragma config TROEN =     OFF
#pragma config JTAGEN =     OFF
#pragma config FCPRI =      LRSA
#pragma config DMAPRI =    LRSA
#pragma config EXLPRI =    LRSA
#pragma config USBSSEN =     OFF
#pragma config PMULOCK =     OFF
#pragma config PGLOCK =      OFF
#pragma config PMDLOCK =   OFF
#pragma config IOLOCK =  OFF
#pragma config CFGLOCK =   OFF
#pragma config OC_ACLK =  OCMP_TMR2_TMR3
#pragma config IC_ACLK =  ICAP_TMR2_TMR3
#pragma config CANFDDIV =  0
#pragma config PCM =  SFR
#pragma config UPLLHWMD =  OFF
#pragma config SPLLHWMD =   OFF
#pragma config BTPLLHWMD =        OFF
#pragma config ETHPLLHWMD =        OFF
#pragma config FECCCON =         OFF
#pragma config ETHTPSF =         RPSF
#pragma config EPGMCLK =         FRC


/*** DEVCFG1 ***/
#pragma config DEBUG =         EMUC
#pragma config ICESEL =         ICS_PGx2
#pragma config TRCEN =         ON
#pragma config FMIIEN =         OFF
#pragma config ETHEXEREF =         OFF
#pragma config CLASSBDIS =         DISABLE
#pragma config USBIDIO =         ON
#pragma config VBUSIO =         ON
#pragma config HSSPIEN =         OFF
#pragma config SMCLR =      MCLR_NORM
#pragma config USBDMTRIM =      0
#pragma config USBDPTRIM =      0
#pragma config HSUARTEN =    ON
#pragma config WDTPSS =    PSS1


/*** DEVCFG2 ***/
#pragma config DMTINTV =    WIN_63_64
#pragma config POSCMOD =    HS
#pragma config WDTRMCS =    LPRC
#pragma config SOSCSEL =    CRYSTAL
#pragma config WAKE2SPD =    ON
#pragma config CKSWEN =    ON
#pragma config FSCMEN =    ON
#pragma config WDTPS =    PS1
#pragma config WDTSPGM =    STOP
#pragma config WINDIS =    NORMAL
#pragma config WDTEN =    OFF
#pragma config WDTWINSZ =    WINSZ_25
#pragma config DMTCNT =    DMT31
#pragma config DMTEN =    OFF


/*** DEVCFG4 ***/
#pragma config SOSCCFG =    0
#pragma config VBZPBOREN =    ON
#pragma config DSZPBOREN =    ON
#pragma config DSWDTPS =    DSPS1
#pragma config DSWDTOSC =    LPRC
#pragma config DSWDTEN =    OFF
#pragma config DSEN =    OFF
#pragma config SOSCEN =    OFF


/*** FCPN0 ***/
#pragma config CP =    OFF





// *****************************************************************************
// *****************************************************************************
// Section: Driver Initialization Data
// *****************************************************************************
// *****************************************************************************
/* Following MISRA-C rules are deviated in the below code block */
/* MISRA C-2012 Rule 7.2 */
/* MISRA C-2012 Rule 11.1 */
/* MISRA C-2012 Rule 11.3 */
/* MISRA C-2012 Rule 11.8 */


// *****************************************************************************
// *****************************************************************************
// Section: System Data
// *****************************************************************************
// *****************************************************************************
/* Structure to hold the object handles for the modules in the system. */
SYSTEM_OBJECTS sysObj;

// *****************************************************************************
// *****************************************************************************
// Section: Library/Stack Initialization Data
// *****************************************************************************
// *****************************************************************************
/******************************************************
 * USB Driver Initialization
 ******************************************************/
 
static uint8_t __attribute__((aligned(512))) USB_ALIGN endPointTable1[DRV_USBFS_ENDPOINTS_NUMBER * 32];


static const DRV_USBFS_INIT drvUSBFSInit =
{
     /* Assign the endpoint table */
    .endpointTable= endPointTable1,

    /* Interrupt Source for USB module */
    .interruptSource = INT_SOURCE_USB,
    
    /* USB Controller to operate as USB Device */
    .operationMode = DRV_USBFS_OPMODE_DEVICE,
    
    .operationSpeed = USB_SPEED_FULL,
 
    /* Stop in idle */
    .stopInIdle = false,
    
    /* Suspend in sleep */
    .suspendInSleep = false,
 
    /* Identifies peripheral (PLIB-level) ID */
    .usbID = USB_ID_1,
    

};








// *****************************************************************************
// *****************************************************************************
// Section: System Initialization
// *****************************************************************************
// *****************************************************************************



// *****************************************************************************
// *****************************************************************************
// Section: Local initialization functions
// *****************************************************************************
// *****************************************************************************

/* MISRAC 2012 deviation block end */

/*******************************************************************************
  Function:
    void SYS_Initialize ( void *data )

  Summary:
    Initializes the board, services, drivers, application and other modules.

  Remarks:
 */

void SYS_Initialize ( void* data )
{
    /* MISRAC 2012 deviation block start */
    /* MISRA C-2012 Rule 2.2 deviated in this file.  Deviation record ID -  H3_MISRAC_2012_R_2_2_DR_1 */
    /* MISRA C-2012 Rule 11.6 deviated in this file.  Deviation record ID -  H3_MISRAC_2012_R_11_6_DR_1 */
    /* Start out with interrupts disabled before configuring any modules */
    (void)__builtin_disable_interrupts();

    PMU_Initialize();
	CLK_Initialize();

    /* Configure Wait States */
    PRECONbits.PFMWS = 5;



	GPIO_Initialize();



    if (bootloader_Trigger() == false)
    {
        run_Application(APP_JUMP_ADDRESS);
    }


	BSP_Initialize();
    NVM_Initialize();


    /* MISRAC 2012 deviation block start */
    /* Following MISRA-C rules deviated in this block  */
    /* MISRA C-2012 Rule 11.3 - Deviation record ID - H3_MISRAC_2012_R_11_3_DR_1 */
    /* MISRA C-2012 Rule 11.8 - Deviation record ID - H3_MISRAC_2012_R_11_8_DR_1 */



    /* Initialize the USB device layer */
    sysObj.usbDevObject0 = USB_DEVICE_Initialize (USB_DEVICE_INDEX_0 , ( SYS_MODULE_INIT* ) & usbDevInitData);


    /* Initialize USB Driver */ 
    sysObj.drvUSBFSObject = DRV_USBFS_Initialize(DRV_USBFS_INDEX_0, (SYS_MODULE_INIT *) &drvUSBFSInit);    


    /* MISRAC 2012 deviation block end */
    APP_Initialize();


    EVIC_Initialize();

	/* Enable global interrupts */
    (void)__builtin_enable_interrupts();


    /* MISRAC 2012 deviation block end */
}
