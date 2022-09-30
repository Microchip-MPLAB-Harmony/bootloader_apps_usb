/*******************************************************************************
  MPLAB Harmony Application Source File

  Company:
    Microchip Technology Inc.

  File Name:
    app_mips.c

  Summary:
    This file contains the source code for the MPLAB Harmony application.

  Description:
    This file contains the source code for the MPLAB Harmony application.  It
    implements the logic of the application's state machine and it may call
    API routines of other MPLAB Harmony modules in the system, such as drivers,
    system services, and middleware.  However, it does not call any of the
    system interfaces (such as the "Initialize" and "Tasks" functions) of any of
    the modules in the system or make any assumptions about when those functions
    are called.  That is the responsibility of the configuration-specific system
    files.
 *******************************************************************************/

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

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include "app_mips.h"
#include "bootloader/bootloader_usb_device_hid.h"

// *****************************************************************************
// *****************************************************************************
// Section: Global Data Definitions
// *****************************************************************************
// *****************************************************************************

#define TIMER_DELAY_BOOT_MS     3000
#define TIMER_DELAY_MS          1000

// *****************************************************************************
/* Application Data

  Summary:
    Holds application data

  Description:
    This structure holds the application's data.

  Remarks:
    This structure should be initialized by the APP_MIPS_Initialize function.

    Application strings and buffers are be defined outside this structure.
*/

APP_MIPS_DATA app_mipsData;

// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Functions
// *****************************************************************************
// *****************************************************************************

void timerCallback(uintptr_t context)
{
    LED_TOGGLE();
}

// *****************************************************************************
// *****************************************************************************
// Section: Application Local Functions
// *****************************************************************************
// *****************************************************************************


// *****************************************************************************
// *****************************************************************************
// Section: Application Initialization and State Machine Functions
// *****************************************************************************
// *****************************************************************************

/*******************************************************************************
  Function:
    void APP_MIPS_Initialize ( void )

  Remarks:
    See prototype in app_mips.h.
 */

void APP_MIPS_Initialize ( void )
{
    /* Place the App state machine in its initial state. */
    app_mipsData.state = APP_MIPS_STATE_INIT;

}


/******************************************************************************
  Function:
    void APP_MIPS_Tasks ( void )

  Remarks:
    See prototype in app_mips.h.
 */

void APP_MIPS_Tasks ( void )
{

    /* Check the application's current state. */
    switch ( app_mipsData.state )
    {
        /* Application's initial state. */
        case APP_MIPS_STATE_INIT:
        {
            /* Add Delay for the UART Console to get enumerated after reset */
            app_mipsData.timerHandle = SYS_TIME_HANDLE_INVALID;

            if (SYS_TIME_DelayMS(TIMER_DELAY_BOOT_MS, &app_mipsData.timerHandle) != SYS_TIME_SUCCESS)
            {
                app_mipsData.state = APP_MIPS_STATE_ERROR;
                
                break;
            }

            if(SYS_TIME_DelayIsComplete(app_mipsData.timerHandle) != true)
            {
                // Wait till the delay has not expired
                while (SYS_TIME_DelayIsComplete(app_mipsData.timerHandle) == false)
                {
                    
                }
            }

            /* Check from which Bank the Application is running */
            if ((NVMCON & _NVMCON_PFSWAP_MASK) != _NVMCON_PFSWAP_MASK)
            {
                printf("\n\r####### Live Update Application running from Program Flash BANK 1 #######\n\r");

                printf("\n\r####### Send new binary from host tool to program in BANK 2 #######\n\r");
            }
            else
            {
                printf("\n\r####### Live Update Application running from Program Flash BANK 2 #######\n\r");

                printf("\n\r####### Send new binary from host tool to program in BANK 1 #######\n\r");
            }

            /* Register a 1 Second periodic callback with time system service to Blink LED */
            app_mipsData.timerHandle = SYS_TIME_HANDLE_INVALID;

            app_mipsData.timerHandle = SYS_TIME_CallbackRegisterMS(timerCallback, (uintptr_t)&app_mipsData, TIMER_DELAY_MS, SYS_TIME_PERIODIC);

            if (app_mipsData.timerHandle == SYS_TIME_HANDLE_INVALID)
            {
                app_mipsData.state = APP_MIPS_STATE_ERROR;
            }
            else
            {
                app_mipsData.state = APP_MIPS_STATE_SWITCH_PRESS_WAIT;
                
                printf("\n\r####### Press Switch 1 to run new firmware once programming is complete  #######\n\r");

                printf("\n\r---------------------------------------------------------------------------------\n\r");
            }

            break;
        }

        case APP_MIPS_STATE_SWITCH_PRESS_WAIT:
        {
            if (SWITCH_GET() == SWITCH_PRESSED)
            {
                while (SWITCH_GET() == SWITCH_PRESSED)
                {
                    
                }

                bootloader_SwapAndReset();
            }

            break;
        }

        /* The default state should never be executed. */
        case APP_MIPS_STATE_ERROR:
        default:
        {
            break;
        }
    }
}


/*******************************************************************************
 End of File
 */
