---
grand_parent: USB Bootloader Applications
parent: USB Device HID Live Update
title: Building and Running on SAM E54 Xplained Pro Evaluation Kit
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# Building and Running the USB Live Update applications

## Downloading and building the application

To clone or download these application from Github,go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/bootloader_apps_usb) and then click Clone button to clone this repo or download as zip file. This content can also be download using content manager by following [these instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki)

Path of the application within the repository is **apps/usb_live_update/**

To build the application, refer to the following table and open the project using its IDE.

### Live Update Application

| Project Name      | Description                                    |
| ----------------- | ---------------------------------------------- |
| live_update_app/firmware/sam_e54_xpro.X    | MPLABX Project for [SAM E54 Xplained Pro Evaluation Kit](https://www.microchip.com/developmenttools/ProductDetails/atsame54-xpro)|

## Setting up [SAM E54 Xplained Pro Evaluation Kit](https://www.microchip.com/developmenttools/ProductDetails/atsame54-xpro)

- Connect the Debug USB port on the board to the computer using a micro USB cable

- Use TARGET USB connector on the board to connect the USB Device to the USB Host PC

## Running the Application

1. Open the Terminal application (Ex.:Tera Term) on the computer to get live update application messages through UART once loaded
2. Configure the serial port settings as follows:
    - Baud : 115200
    - Data : 8 Bits
    - Parity : None
    - Stop : 1 Bit
    - Flow Control : None

3. Open the live_update_app application project *live_update_app/firmware/sam_e54_xpro.X* in the IDE

4. Build and program the **live_update_app** application using the IDE

5. **LED0** should start blinking once programming is completed and below message has to be displayed on the Console
    - You can see how the live update application was loaded in BANK A by IDE
    - HID Custom device with product ID **3C** will be enumerated on Host PC

    ![usb_live_update_bank_a](./images/usb_live_update_bank_a.png)

6. Launch the Unified Host application from below path
    - \<harmony3_path\>/bootloader/tools/UnifiedHost-\*/UnifiedHost-\*.jar

7. Configure the Unified host application
    - Select the **Device architecture** and **Protocol** as shown below

        ![hostConfig](../../docs/images/unified_host_config.png)

    - Click on configure button and select the USB Device as **3C**

        ![hostUSBSetting](../../docs/images/unified_host_usb_setting.png)

    - Load the live update application hex file to be programmed using below option
        - *\<harmony3_path\>/bootloader_apps_usb/apps/usb_live_update/live_update_app/firmware/sam_e54_xpro.X/dist/sam_e54_xpro/production/sam_e54_xpro.X.production.hex*

        ![hostLoadHex](../../docs/images/unified_host_load_hex.png)

    - Open the **Console** window of the host application to view application bootloading sequence

        ![hostToolsConsole](../../docs/images/unified_host_tools_console.png)

8. Click on **Program Device** button to program the loaded live update application hex file on to the device
    - You can note that throughout the programming sequence and after programming the **LED0** will be blinking as the application task is running along with bootloader task **(Live Update Feature)**

    ![hostProgramDevice](../../docs/images/unified_host_program_device.png)

9. Following snapshot shows output of successfully programming the test application
    - Ignore the Device Reset Messages from the host tool. The live update application ignores the reset command received and waits for a switch press to update serial number and reset

    ![hostSuccess](../../docs/images/unified_host_success.png)

10. Press the Switch **SW0** to update serial of **Inactive Bank** and trigger reset. You should see below output on success
    - This step shows that the new firmware programmed in **BANK B** is running which is mapped to lower region by switcher at reset

    ![usb_live_update_bank_b](./images/usb_live_update_bank_b.png)

11. Repeat Steps 8-10 for further updates and observe the Banks from which application is running at every update

## Configurations to be Noted

### Live Update Application

- Enable Live Update Option to configure USB Device HID bootloader in **Live Update Mode**

![live_update_app_config_pic32m](./images/live_update_app_config_sam.png)

- **Normalize hex file:**
    - Check the Normalize hex file option as shown below, as the Unified bootloader host application takes hex file as an input. Normalizing the hex file will make sure the data in the hex file is arranged sequentially.

![live_update_app_mplab_config_sam](./images/live_update_app_mplab_config_sam.png)
