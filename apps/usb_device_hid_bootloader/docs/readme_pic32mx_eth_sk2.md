---
grand_parent: USB Bootloader Applications
parent: USB Device HID Bootloader
title: Building and Running on PIC32MX Ethernet Starter Kit II
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# Building and Running the USB Device HID Bootloader applications

## Downloading and building the application

To clone or download these application from Github,go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/bootloader_apps_usb) and then click Clone button to clone this repo or download as zip file. This content can also be download using content manager by following [these instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki)

Path of the application within the repository is **apps/usb_device_hid_bootloader/**

To build the application, refer to the following table and open the project using its IDE.

### Bootloader Application

| Project Name      | Description                                    |
| ----------------- | ---------------------------------------------- |
| bootloader/firmware/pic32mx_eth_sk2.X    | MPLABX Project for [PIC32MX Ethernet Starter Kit II](https://www.microchip.com/DevelopmentTools/ProductDetails/dm320004-2)|

### Test Application

| Project Name      | Description                                    |
| ----------------- | ---------------------------------------------- |
| test_app/firmware/pic32mx_eth_sk2.X    | MPLABX Project for [PIC32MX Ethernet Starter Kit II](https://www.microchip.com/DevelopmentTools/ProductDetails/dm320004-2)|

## Setting up [PIC32MX Ethernet Starter Kit II](https://www.microchip.com/DevelopmentTools/ProductDetails/dm320004-2)

- Mount [PIC32MX Ethernet Starter Kit II](https://www.microchip.com/DevelopmentTools/ProductDetails/dm320004-2) on the J1 connector of [Starter Kit I/O Expansion Board](https://www.microchip.com/DevelopmentTools/ProductDetails/dm320002)
- Connect **TX pin** of [USB UART click](https://www.mikroe.com/usb-uart-click) to **U2RX pin of J11** header on [Starter Kit I/O Expansion Board](https://www.microchip.com/DevelopmentTools/ProductDetails/dm320002)
- Connect **RX pin** of [USB UART click](https://www.mikroe.com/usb-uart-click) to **U2TX pin of J11** header on [Starter Kit I/O Expansion Board](https://www.microchip.com/DevelopmentTools/ProductDetails/dm320002)
- Connect **GND pin** of [USB UART click](https://www.mikroe.com/usb-uart-click) to **GND pin of J11** header on [Starter Kit I/O Expansion Board](https://www.microchip.com/DevelopmentTools/ProductDetails/dm320002)
- Connect mini USB cable to the [USB UART click](https://www.mikroe.com/usb-uart-click) board. This will enumerate the USB to UART port.
- For programming, Connect mini USB cable to the 'Debug USB' connector(J7) on the [PIC32MX Ethernet Starter Kit II](https://www.microchip.com/DevelopmentTools/ProductDetails/dm320004-2) to the computer
- Use the USB micro-AB port J3 which is located on the bottom side of the [PIC32MX Ethernet Starter Kit II](https://www.microchip.com/DevelopmentTools/ProductDetails/dm320004-2) to connect the USB Device to the USB Host PC

## Running the Application

1. Open the test application project *test_app/firmware/pic32mx_eth_sk2.X* in the IDE
2. Build the project to generate the binary **(Do not program the binary)**
3. Open the bootloader project *bootloader/firmware/pic32mx_eth_sk2.X* in the IDE
4. Build and program the application using the IDE

5. Once programming is completed and bootloader starts running
    - **LED1** will be Turned On
    -  HID Custom device with product ID **3C** will be enumerated on Host PC

6. Open the Terminal application (Ex.:Tera Term) on the computer to get test application messages through UART once bootloaded
7. Configure the serial port settings as follows:
    - Baud : 115200
    - Data : 8 Bits
    - Parity : None
    - Stop : 1 Bit
    - Flow Control : None

8. Launch the Unified Host application from below path
    - *\<harmony3_path\>\bootloader\tools\UnifiedHost-\*\UnifiedHost-\*.jar*

9. Configure the Unified host application
    - Select the **Device architecture** and **Protocol** as shown below

        ![hostConfig](./images/btl_unified_host_config.png)

    - Click on configure button and select the USB Device as **3C**

        ![hostUSBSetting](./images/btl_unified_host_usb_setting.png)

    - Load the test application hex file to be programmed using below option
        - *\<harmony3_path\>\bootloader_apps_usb\apps\usb_device_hid_bootloader\test_app\firmware\pic32mx_eth_sk2.X\dist\pic32mx_eth_sk2\production\pic32mx_eth_sk2.X.production.hex*

        ![hostLoadHex](./images/btl_unified_host_load_hex.png)

    - Open the **Console** window of the host application to view application bootloading sequence

        ![hostToolsConsole](./images/btl_unified_host_tools_console.png)

10. Click on **Program Device** button to program the loaded test application hex file on to the device

    ![hostProgramDevice](./images/btl_unified_host_program_device.png)

11. Following snapshot shows output of successfully programming the test application

    ![hostSuccess](./images/btl_unified_host_success.png)

12. If above step is successful then **LED3** should start blinking and you should see below output on the console

    ![output](./images/btl_usb_device_hid_test_app_console_success.png)

13. Press and hold the Switch **SW1** to trigger Bootloader from test application and you should see below output

    ![output](./images/btl_usb_device_hid_test_app_console_trigger_bootloader.png)

14. Repeat Steps 10-12 once and jump to Step-15
    - This step is to verify that bootloader is running after triggering bootloader from test application in Step 13

15. **Press and hold** the Switch **SW1** and then Power cycle the device to force trigger bootloader at startup
16. Repeat Steps 10-12 once
    - This step is to verify whether bootloader is triggered by switch press at reset

**Note**
- Unified Host application has to be closed in order to program any application using MPLAB X IDE


## Additional Steps (Optional)
- To bootload any other application refer to [Application Configurations](../../docs/readme_configure_application_pic32m.md)

- Once done repeat the applicable steps mentioned in [Running The Application](#running-the-application)
