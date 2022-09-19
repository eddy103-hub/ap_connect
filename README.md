# ap_connect
 This code example illustrates how the ATWINC1500 module, mounted on the ATWINC1500 Xplained Pro Extension Board, connects to access point using the PIC18F57Q43 Curiosity Nano Evaluation Kit.
 # Related Documentation
 * [PIC18F57Q43 Curiosity Nano Hardware User Guide](https://ww1.microchip.com/downloads/en/DeviceDoc/PIC18F57Q43-Curiosity-Nano-HW-UserGuide-DS40002186B.pdf)
 * [ WINC1500 Xplained Pro User's Guide](https://ww1.microchip.com/downloads/en/DeviceDoc/50002616A.pdf)
 * [Adding an ATWINC15x0 Wi-Fi® Network Controller to a Microcontroller Application](https://ww1.microchip.com/downloads/en/Appnotes/Adding-an-ATWINC15x0-Wi-Fi-Network-Controller-to-a-Microcontroller-Application-Application-Note-DS00002907B.pdf)
 * [ATWINC15x0/ATWINC3400 Wi-Fi® Network Controller Software Programming Guide](https://ww1.microchip.com/downloads/en/Appnotes/ATWINC15x0-ATWINC3400-Wi-Fi-Network-Controller-DS70005305D.pdf)

 
# Software Used
 * [MPLAB® X IDE v6.00](https://www.microchip.com/en-us/tools-resources/develop/mplab-x-ide) or newer
 * [MPLAB® XC8 v2.36](https://www.microchip.com/en-us/tools-resources/develop/mplab-xc-compilers/downloads-documentation#XC8) or newer
 * Microchip PIC18F-Q Series Device Support (1.12.193) or newer (https://packs.download.microchip.com/)
 * [Tera Term](https://www.heise.de/download/product/tera-term-51776) or any terminal emulator

# Hardware Used
* [PIC18F57Q43 Curiosity Nano Evaluation Kit](https://www.microchip.com/en-us/development-tool/DM164150)
* [ATWINC1500-XPRO](https://www.microchip.com/en-us/development-tool/atwinc1500-xpro)
* [Curiosity Nano Base for Click boards](https://www.microchip.com/en-us/development-tool/AC164162)
# Setup
## Harware Setup
![image](https://user-images.githubusercontent.com/66494140/190973658-34e1c03e-8b0b-43c3-8cc5-1a3071084b04.png)

## MCC Settings:
#### WINC15XX 
![image](https://user-images.githubusercontent.com/66494140/190971137-07f58d36-2cea-49be-837d-9f0eabf34881.png)
#### SPI1
![image](https://user-images.githubusercontent.com/66494140/190971385-b3871069-de79-48af-b992-d6c1d32a845a.png)
#### UART1
![image](https://user-images.githubusercontent.com/66494140/190971497-8c279b61-1526-46df-81c9-a58c14270e2d.png)
#### Pin Module
![image](https://user-images.githubusercontent.com/66494140/190971794-c3f248c6-59c1-4a3f-a496-78f3d73d3559.png)
# Demo
After the application is flashed to the PIC18F57Q43 Curiosity Nano, the ATWINC1500 module mounted on the ATWINC1500 Xplained Pro Extension Board is connected to the access point as shown on the Tera Term.


![image](https://user-images.githubusercontent.com/66494140/190977755-6ce32deb-e980-4fcf-a1d5-05585e4459fd.png)
#Summery

