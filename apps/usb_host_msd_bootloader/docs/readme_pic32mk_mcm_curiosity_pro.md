---
grand_parent: USB Bootloader Applications
parent: USB Host MSD Bootloader
title: Building and Running on PIC32MK MCM CURIOSITY PRO DEVELOPMENT BOARD
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# Building and Running the USB Host MSD Bootloader applications

## Downloading and building the application

To clone or download these application from Github,go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/bootloader_apps_usb) and then click Clone button to clone this repo or download as zip file. This content can also be download using content manager by following [these instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki)

Path of the application within the repository is **apps/usb_host_msd_bootloader/**

To build the application, refer to the following table and open the project using its IDE.

### Bootloader Application

| Project Name      | Description                                    |
| ----------------- | ---------------------------------------------- |
| bootloader/firmware/pic32mk_mcm_curiosity_pro.X    | MPLABX Project for [PIC32MK MCM CURIOSITY PRO DEVELOPMENT BOARD](https://www.microchip.com/en-us/development-tool/ev31e34a)|

### Test Application

| Project Name      | Description                                    |
| ----------------- | ---------------------------------------------- |
| test_app/firmware/pic32mk_mcm_curiosity_pro.X    | MPLABX Project for [PIC32MK MCM CURIOSITY PRO DEVELOPMENT BOARD](https://www.microchip.com/en-us/development-tool/ev31e34a)|

## Setting up [PIC32MK MCM CURIOSITY PRO DEVELOPMENT BOARD](https://www.microchip.com/en-us/development-tool/ev31e34a)

- Connect a micro USB cable to the USB to UART port J400. This will enumerate as a COM port on the PC
- For programming, Connect a micro USB cable to the USB DEBUG port J500
- Use the USB Host Type A Connector J201 to connect USB Flash Drive
- Place the Switch S200 direction towards Host

## Running the Application

1. Open the test application project *test_app/firmware/pic32mk_mcm_curiosity_pro.X* in the IDE
2. Build the project to generate the binary **(Do not program the binary)**
3. Open the bootloader project *bootloader/firmware/pic32mk_mcm_curiosity_pro.X* in the IDE
4. Build and program the application using the IDE

5. **LED1** will be Turned On once programming is completed and bootloader starts running

6. Open the Terminal application (Ex.:Tera Term) on the computer to get test application messages through UART once bootloaded
7. Configure the serial port settings as follows:
    - Baud : 115200
    - Data : 8 Bits
    - Parity : None
    - Stop : 1 Bit
    - Flow Control : None

8. Copy the generated application binary file to a USB Flash drive from the Host PC
    - *\<harmony3_path\>\bootloader_apps_usb\apps\usb_host_msd_bootloader\test_app\firmware\pic32mk_mcm_curiosity_pro.X\dist\pic32mk_mcm_curiosity_pro\production\pic32mk_mcm_curiosity_pro.X.production.bin*

9. Rename the copied application binary file to **image.bin**

10. Insert the USB Flash Drive with the application binary **image.bin** to the Host connector on the device

11. Once the application is successfully programmed **LED3** should start blinking and you should see below output on the console

    ![output](./images/btl_usb_host_msd_test_app_console_success.png)

12. Remove the USB Flash Drive from the Host connector

13. Press and hold the Switch **SW1** to trigger Bootloader from test application and you should see below output

    ![output](./images/btl_usb_host_msd_test_app_console_trigger_bootloader.png)

14. Repeat Steps 10-12 once and jump to Step-15
    - This step is to verify that bootloader is running after triggering bootloader from test application in Step 13

15. **Press and hold** the Switch **SW1** and then Power cycle the device to force trigger bootloader at startup
16. Repeat Steps 10-12 once
    - This step is to verify whether bootloader is triggered by switch press at reset


## Additional Steps (Optional)
- To bootload any other application refer to [Application Configurations](../../docs/readme_configure_application_pic32m.md)

- Once done repeat the applicable steps mentioned in [Running The Application](#running-the-application)
