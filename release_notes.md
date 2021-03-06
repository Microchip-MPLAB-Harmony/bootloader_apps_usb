---
title: Release notes
nav_order: 99
---

![Microchip logo](https://raw.githubusercontent.com/wiki/Microchip-MPLAB-Harmony/Microchip-MPLAB-Harmony.github.io/images/microchip_logo.png)
![Harmony logo small](https://raw.githubusercontent.com/wiki/Microchip-MPLAB-Harmony/Microchip-MPLAB-Harmony.github.io/images/microchip_mplab_harmony_logo_small.png)

# Microchip MPLAB® Harmony 3 Release Notes

## USB Bootloader Applications Release v3.0.2

- Added discover.microchip.com metadata

### Known Issues
- No changes from v3.0.0

### Development Tools
- No changes from v3.0.0

## USB Bootloader Applications Release v3.0.1

- Updated test application projects to disable default linker file generation added in csp v3.8.0 as it requires custom linker file

### Known Issues
- No changes from v3.0.0

### Development Tools
- No changes from v3.0.0

## USB Bootloader Applications Release v3.0.0
### New Features

- This release introduces support of
    - USB Device HID Bootloader Applications for SAM and PIC32M family of 32-bit microcontrollers.
    - USB Host MSD Bootloader Applications for SAM and PIC32M family of 32-bit microcontrollers.

### Development kit and demo application support
- The following table provides bootloader demo applications available for different development kits.

    | Product Family                 | Development Kits                                    | USB Device HID   | USB Host MSD              |
    | ------------------------------ | --------------------------------------------------- | ---------------- | ------------------------- |
    | SAM D21/DA1                    | [SAM D21 Xplained Pro Evaluation Kit](https://www.microchip.com/DevelopmentTools/ProductDetails.aspx?PartNO=ATSAMD21-XPRO)   | Yes              | Yes                       |
    | SAM L21                        | [SAM L21 Xplained Pro Evaluation Kit](https://www.microchip.com/developmenttools/ProductDetails/ATSAML21-XPRO-B)             | Yes              | No                        |
    | SAM L22                        | [SAM L22 Xplained Pro Evaluation Kit](https://www.microchip.com/developmenttools/ProductDetails/ATSAML22-XPRO-B)             | Yes              | No                        |
    | SAM D5x/E5x                    | [SAM E54 Xplained Pro Evaluation Kit](https://www.microchip.com/developmenttools/ProductDetails/ATSAME54-XPRO)               | Yes              | Yes                       |
    | SAM E70/S70/V70/V71            | [SAM E70 Xplained Ultra Evaluation Kit](https://www.microchip.com/DevelopmentTools/ProductDetails.aspx?PartNO=ATSAME70-XULT)   | Yes              | Yes                       |
    | PIC32MX5XX/6XX/7XX             | [PIC32MX Ethernet Starter Kit II](https://www.microchip.com/DevelopmentTools/ProductDetails/dm320004-2)                                                                                       | Yes              | Yes                       |
    | PIC32MX330/350/370/430/450/470 | [Curiosity PIC32MX470 Development Board](https://www.microchip.com/DevelopmentTools/ProductDetails/dm320103)                    | Yes              | Yes                       |
    | PIC32MX1XX/2XX/5XX             | [PIC32MX1/2/5 Starter Kit](https://www.microchip.com/developmenttools/productdetails/dm320100)                                                                                       | Yes              | No                        |
    | PIC32MK GPD/GPE/MCF            | [PIC32MK GP Development Kit](https://www.microchip.com/developmenttools/ProductDetails/dm320106)                                                                                       | Yes              | Yes                       |
    | PIC32MK GPK/MCM                | PIC32MK MCM Curiosity                               | Yes              | No                        |
    | PIC32MZ EF                     | [PIC32MZ Embedded Connectivity with FPU (EF) Starter Kit](https://www.microchip.com/Developmenttools/ProductDetails/Dm320007)                    | Yes              | Yes                       |
    | PIC32MZ DA                     | [PIC32MZ Embedded Graphics with Stacked DRAM (DA) Starter Kit (Crypto)](https://www.microchip.com/DevelopmentTools/ProductDetails/DM320010-C)                  | Yes              | Yes                       |


### Known Issues

* Unified Host application when configured to use USB protocol has to be closed before programming any PIC32M based application using MPLAB X IDE


### Development Tools

* [MPLAB® X IDE v5.40](https://www.microchip.com/mplab/mplab-x-ide)
* [MPLAB® XC32 C/C++ Compiler v2.41](https://www.microchip.com/mplab/compilers)
* MPLAB® X IDE plug-ins:
    * MPLAB® Harmony Configurator (MHC) v3.5.0 and above.
