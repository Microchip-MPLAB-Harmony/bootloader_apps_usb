---
parent: USB Bootloader Applications
title: USB Device HID Bootloader
has_children: false
has_toc: false
nav_order: 1
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

To clone or download these application from Github,go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/bootloader_apps_usb) and then click Clone button to clone this repo or download as zip file. This content can also be download using content manager by following [these instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki)

# USB Device HID Bootloader

This example application shows how to use the Bootloader Library to bootload an application using USB Device HID protocol.

### Bootloader Application

- This is a bootloader application which resides from
    - The starting location of the flash memory region for SAM devices
    - The starting location of the Boot flash memory region for PIC32MZ devices
    - The starting location of Program Flash memory for PIC32MK, PIC32MX and PIC32MM devices
- It uses the USB Device HID port with **Product ID 0x3C** to receive application hex from host PC using the Unified Bootloader Host Application
- It calls the bootloader_Tasks() function which receives application to be programmed into flash memory over USB Device HID port
- The application glows an LED once bootloader firmware is running
- Trigger Methods
    - It uses the On board Switch as bootloader trigger pin to force enter the bootloader at reset of device
    - It checks for bootloader request pattern **(0x5048434D)** from the starting 16 Bytes of RAM to force enter bootloader at reset of device

### Test Application

- This is a test application which resides from
    - The end of bootloader size in device flash memory for SAM devices
    - The end of bootloader size in Program Flash memory for PIC32MK, PIC32MX and PIC32MM devices
    - The start of Program Flash memory for PIC32MZ devices
- It will be loaded into flash memory by bootloader application
- It blinks an LED and provides console output
- It uses the On board Switch to trigger the bootloader from firmware
    - Once the switch is pressed it loads first 16 bytes of RAM with bootloader request pattern **(0x5048434D)** and resets the device

## Development Kits
The following table provides links to documentation on how to build and run USB Device HID bootloader on different development kits

| Development Kit |
|:---------|
|[PIC32MK GP Development Kit](docs/readme_pic32mk_gp_db.md) |
|[PIC32MK MCM Curiosity Pro Development Board](docs/readme_pic32mk_mcm_curiosity_pro.md) |
|[PIC32MM USB Curiosity board](docs/readme_pic32mm_usb_curiosity.md) |
|[PIC32MX1/2/5 Starter Kit](docs/readme_pic32mx_125_sk.md) |
|[PIC32MX Ethernet Starter Kit II](docs/readme_pic32mx_eth_sk2.md) |
|[PIC32MX Curiosity Development Board](docs/readme_pic32mx470_curiosity.md) |
|[PIC32MZ Embedded Graphics with Stacked DRAM (DA) Starter Kit (Crypto)](docs/readme_pic32mz_das_sk.md) |
|[PIC32MZ Embedded Connectivity with FPU (EF) Starter Kit](docs/readme_pic32mz_ef_sk.md) |
|[PIC32 WFI32E Curiosity Board](docs/readme_pic32mz_w1_curiosity.md) |
|[SAM D21 Xplained Pro Evaluation Kit](docs/readme_sam_d21_xpro.md) |
|[SAM E54 Xplained Pro Evaluation Kit](docs/readme_sam_e54_xpro.md) |
|[SAM E70 Xplained Ultra Evaluation Kit](docs/readme_sam_e70_xult.md) |
|[SAM L21 Xplained Pro Evaluation Kit](docs/readme_sam_l21_xpro.md) |
|[SAM L22 Xplained Pro Evaluation Kit](docs/readme_sam_l22_xpro.md) |
