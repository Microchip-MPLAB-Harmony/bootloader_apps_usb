---
parent: Live Update Memory Layout
title: PIC32M Live Update Memory Layout
has_children: false
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# PIC32M Live Update Memory Layout

- This layout is applicable only for devices which have Dual bank support (PIC32MZ/PIC32MK)
    - Refer to respective Datasheet for Program Flash Memory Start and Size

- Switcher code is always placed at start of the Boot flash memory (0xBFC00000) as upon reset the device runs from start of boot flash memory. 

- Program Flash memory is split into two equal banks **(BANK1 and BANK2)**. Either of the banks will be mapped to Lower region **(0x1D000000)** from which the USB Device HID Live Update application has to run

    - Start address of **Active Bank** which is mapped to lower region is always **0x9D000000**

    - Start address of **Inactive Bank** is from mid of the Program flash memory which can vary from device to device. Refer to respective Data sheets for details of Flash memory layout. 

- **Row size number of bytes** are reserved at end of each bank for storing serial number. This serial number will be used by switcher to map the appropriate bank to lower memory region and run the live update application from there

- Actual live update application start address should always fall into lower mapped region **(0x9D000000 to Mid of Flash)**. Size of the application in the linker script should also not exceed the Mid of flash.

    ![live_update_memory_layout_pic32m](./images/live_update_memory_layout_pic32m.png)


