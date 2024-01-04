# PIC32MZ Embedded Graphics with Stacked DRAM \(DA\) Starter Kit \(Crypto\): Building and Running the USB Host MSD Bootloader applications

**Parent topic:**[USB Host MSD Bootloader](GUID-5D274490-A6BA-420C-91D1-6E56CA0CF5B3.md)

## Downloading and building the application

To clone or download these application from Github,go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/bootloader_apps_usb) and then click Clone button to clone this repo or download as zip file. This content can also be download using content manager by following [these instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki)

Path of the application within the repository is **apps/usb\_host\_msd\_bootloader/**

To build the application, refer to the following table and open the project using its IDE.

### Bootloader Application

|Project Name|Description|
|------------|-----------|
|bootloader/firmware/pic32mz\_das\_sk.X|MPLABX Project for [PIC32MZ Embedded Graphics with Stacked DRAM \(DA\) Starter Kit \(Crypto\)](http://www.microchip.com/DevelopmentTools/ProductDetails/DM320010-C)|

### Test Application

|Project Name|Description|
|------------|-----------|
|test\_app/firmware/pic32mz\_das\_sk.X|MPLABX Project for [PIC32MZ Embedded Graphics with Stacked DRAM \(DA\) Starter Kit \(Crypto\)](http://www.microchip.com/DevelopmentTools/ProductDetails/DM320010-C)|

## Setting up [PIC32MZ Embedded Graphics with Stacked DRAM \(DA\) Starter Kit \(Crypto\)](http://www.microchip.com/DevelopmentTools/ProductDetails/DM320010-C)

-   Connect a micro USB cable to the UART-USB port J5

-   For programming, connect a micro USB cable to the USB Debug port J19

    -   **Do not connect the micro USB cable to a USB Hub**

-   Use the USB Host Type A Connector J7 to connect USB Flash Drive to the starter kit


## Running the Application

1.  Open the test application project *test\_app/firmware/pic32mz\_das\_sk.X* in the IDE

2.  Build the project to generate the binary **\(Do not program the binary\)**

3.  Open the bootloader project *bootloader/firmware/pic32mz\_das\_sk.X* in the IDE

4.  Build and program the application using the IDE

5.  **LED1** will be Turned On once programming is completed and bootloader starts running

6.  Open the Terminal application \(Ex.:Tera Term\) on the computer to get test application messages through UART once bootloaded

7.  Configure the serial port settings as follows:

    -   Baud : 115200

    -   Data : 8 Bits

    -   Parity : None

    -   Stop : 1 Bit

    -   Flow Control : None

8.  Copy the generated application binary file to a USB Flash drive from the Host PC

    -   *<harmony3\_path\>\\bootloader\_apps\_usb\\apps\\usb\_host\_msd\_bootloader\\test\_app\\firmware\\pic32mz\_das\_sk.X\\dist\\pic32mz\_das\_sk\\production\\pic32mz\_das\_sk.X.production.bin*

9.  Rename the copied application binary file to **image.bin**

10. Insert the USB Flash Drive with the application binary **image.bin** to the Host connector on the device

11. Once the application is successfully programmed **LED3** should start blinking and you should see below output on the console

    ![output](GUID-85766B71-F137-4B0A-8BA8-B94723A3608B-low.png)

12. Remove the USB Flash Drive from the Host connector

13. Press and hold the Switch **SW1** to trigger Bootloader from test application and you should see below output

    ![output](GUID-334C25E1-AD62-4367-B951-9CC66ECFC209-low.png)

14. Repeat Steps 10-12 once and jump to Step-15

    -   This step is to verify that bootloader is running after triggering bootloader from test application in Step 13

15. **Press and hold** the Switch **SW1** and then Power cycle the device to force trigger bootloader at startup

16. Repeat Steps 10-12 once

    -   This step is to verify whether bootloader is triggered by switch press at reset


## Additional Steps \(Optional\)

-   To bootload any other application refer to [Application Configurations](GUID-6E96B464-6390-4AD8-A7C5-98AC2758D05F.md)

-   Once done repeat the applicable steps mentioned in [Running The Application](#running-the-application)


