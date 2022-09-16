/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC18F57Q43
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set INT aliases
#define INT_TRIS                 TRISAbits.TRISA6
#define INT_LAT                  LATAbits.LATA6
#define INT_PORT                 PORTAbits.RA6
#define INT_WPU                  WPUAbits.WPUA6
#define INT_OD                   ODCONAbits.ODCA6
#define INT_ANS                  ANSELAbits.ANSELA6
#define INT_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define INT_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define INT_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define INT_GetValue()           PORTAbits.RA6
#define INT_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define INT_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define INT_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define INT_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)
#define INT_SetPushPull()        do { ODCONAbits.ODCA6 = 0; } while(0)
#define INT_SetOpenDrain()       do { ODCONAbits.ODCA6 = 1; } while(0)
#define INT_SetAnalogMode()      do { ANSELAbits.ANSELA6 = 1; } while(0)
#define INT_SetDigitalMode()     do { ANSELAbits.ANSELA6 = 0; } while(0)

// get/set RC4 procedures
#define RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RC4_GetValue()              PORTCbits.RC4
#define RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define RC4_SetPullup()             do { WPUCbits.WPUC4 = 1; } while(0)
#define RC4_ResetPullup()           do { WPUCbits.WPUC4 = 0; } while(0)
#define RC4_SetAnalogMode()         do { ANSELCbits.ANSELC4 = 1; } while(0)
#define RC4_SetDigitalMode()        do { ANSELCbits.ANSELC4 = 0; } while(0)

// get/set RC5 procedures
#define RC5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define RC5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define RC5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define RC5_GetValue()              PORTCbits.RC5
#define RC5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define RC5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define RC5_SetPullup()             do { WPUCbits.WPUC5 = 1; } while(0)
#define RC5_ResetPullup()           do { WPUCbits.WPUC5 = 0; } while(0)
#define RC5_SetAnalogMode()         do { ANSELCbits.ANSELC5 = 1; } while(0)
#define RC5_SetDigitalMode()        do { ANSELCbits.ANSELC5 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetPullup()             do { WPUCbits.WPUC6 = 1; } while(0)
#define RC6_ResetPullup()           do { WPUCbits.WPUC6 = 0; } while(0)
#define RC6_SetAnalogMode()         do { ANSELCbits.ANSELC6 = 1; } while(0)
#define RC6_SetDigitalMode()        do { ANSELCbits.ANSELC6 = 0; } while(0)

// get/set RST aliases
#define RST_TRIS                 TRISCbits.TRISC7
#define RST_LAT                  LATCbits.LATC7
#define RST_PORT                 PORTCbits.RC7
#define RST_WPU                  WPUCbits.WPUC7
#define RST_OD                   ODCONCbits.ODCC7
#define RST_ANS                  ANSELCbits.ANSELC7
#define RST_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RST_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RST_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RST_GetValue()           PORTCbits.RC7
#define RST_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RST_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define RST_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define RST_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define RST_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define RST_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define RST_SetAnalogMode()      do { ANSELCbits.ANSELC7 = 1; } while(0)
#define RST_SetDigitalMode()     do { ANSELCbits.ANSELC7 = 0; } while(0)

// get/set WAKE aliases
#define WAKE_TRIS                 TRISDbits.TRISD5
#define WAKE_LAT                  LATDbits.LATD5
#define WAKE_PORT                 PORTDbits.RD5
#define WAKE_WPU                  WPUDbits.WPUD5
#define WAKE_OD                   ODCONDbits.ODCD5
#define WAKE_ANS                  ANSELDbits.ANSELD5
#define WAKE_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define WAKE_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define WAKE_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define WAKE_GetValue()           PORTDbits.RD5
#define WAKE_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define WAKE_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define WAKE_SetPullup()          do { WPUDbits.WPUD5 = 1; } while(0)
#define WAKE_ResetPullup()        do { WPUDbits.WPUD5 = 0; } while(0)
#define WAKE_SetPushPull()        do { ODCONDbits.ODCD5 = 0; } while(0)
#define WAKE_SetOpenDrain()       do { ODCONDbits.ODCD5 = 1; } while(0)
#define WAKE_SetAnalogMode()      do { ANSELDbits.ANSELD5 = 1; } while(0)
#define WAKE_SetDigitalMode()     do { ANSELDbits.ANSELD5 = 0; } while(0)

// get/set nCS aliases
#define nCS_TRIS                 TRISDbits.TRISD6
#define nCS_LAT                  LATDbits.LATD6
#define nCS_PORT                 PORTDbits.RD6
#define nCS_WPU                  WPUDbits.WPUD6
#define nCS_OD                   ODCONDbits.ODCD6
#define nCS_ANS                  ANSELDbits.ANSELD6
#define nCS_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define nCS_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define nCS_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define nCS_GetValue()           PORTDbits.RD6
#define nCS_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define nCS_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define nCS_SetPullup()          do { WPUDbits.WPUD6 = 1; } while(0)
#define nCS_ResetPullup()        do { WPUDbits.WPUD6 = 0; } while(0)
#define nCS_SetPushPull()        do { ODCONDbits.ODCD6 = 0; } while(0)
#define nCS_SetOpenDrain()       do { ODCONDbits.ODCD6 = 1; } while(0)
#define nCS_SetAnalogMode()      do { ANSELDbits.ANSELD6 = 1; } while(0)
#define nCS_SetDigitalMode()     do { ANSELDbits.ANSELD6 = 0; } while(0)

// get/set CE aliases
#define CE_TRIS                 TRISDbits.TRISD7
#define CE_LAT                  LATDbits.LATD7
#define CE_PORT                 PORTDbits.RD7
#define CE_WPU                  WPUDbits.WPUD7
#define CE_OD                   ODCONDbits.ODCD7
#define CE_ANS                  ANSELDbits.ANSELD7
#define CE_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define CE_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define CE_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define CE_GetValue()           PORTDbits.RD7
#define CE_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define CE_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define CE_SetPullup()          do { WPUDbits.WPUD7 = 1; } while(0)
#define CE_ResetPullup()        do { WPUDbits.WPUD7 = 0; } while(0)
#define CE_SetPushPull()        do { ODCONDbits.ODCD7 = 0; } while(0)
#define CE_SetOpenDrain()       do { ODCONDbits.ODCD7 = 1; } while(0)
#define CE_SetAnalogMode()      do { ANSELDbits.ANSELD7 = 1; } while(0)
#define CE_SetDigitalMode()     do { ANSELDbits.ANSELD7 = 0; } while(0)

// get/set RF0 procedures
#define RF0_SetHigh()            do { LATFbits.LATF0 = 1; } while(0)
#define RF0_SetLow()             do { LATFbits.LATF0 = 0; } while(0)
#define RF0_Toggle()             do { LATFbits.LATF0 = ~LATFbits.LATF0; } while(0)
#define RF0_GetValue()              PORTFbits.RF0
#define RF0_SetDigitalInput()    do { TRISFbits.TRISF0 = 1; } while(0)
#define RF0_SetDigitalOutput()   do { TRISFbits.TRISF0 = 0; } while(0)
#define RF0_SetPullup()             do { WPUFbits.WPUF0 = 1; } while(0)
#define RF0_ResetPullup()           do { WPUFbits.WPUF0 = 0; } while(0)
#define RF0_SetAnalogMode()         do { ANSELFbits.ANSELF0 = 1; } while(0)
#define RF0_SetDigitalMode()        do { ANSELFbits.ANSELF0 = 0; } while(0)

// get/set RF1 procedures
#define RF1_SetHigh()            do { LATFbits.LATF1 = 1; } while(0)
#define RF1_SetLow()             do { LATFbits.LATF1 = 0; } while(0)
#define RF1_Toggle()             do { LATFbits.LATF1 = ~LATFbits.LATF1; } while(0)
#define RF1_GetValue()              PORTFbits.RF1
#define RF1_SetDigitalInput()    do { TRISFbits.TRISF1 = 1; } while(0)
#define RF1_SetDigitalOutput()   do { TRISFbits.TRISF1 = 0; } while(0)
#define RF1_SetPullup()             do { WPUFbits.WPUF1 = 1; } while(0)
#define RF1_ResetPullup()           do { WPUFbits.WPUF1 = 0; } while(0)
#define RF1_SetAnalogMode()         do { ANSELFbits.ANSELF1 = 1; } while(0)
#define RF1_SetDigitalMode()        do { ANSELFbits.ANSELF1 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCAF6 pin functionality
 * @Example
    IOCAF6_ISR();
 */
void IOCAF6_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF6 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF6 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF6_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF6_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF6 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF6_SetInterruptHandler() method.
    This handler is called every time the IOCAF6 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF6_SetInterruptHandler(IOCAF6_InterruptHandler);

*/
extern void (*IOCAF6_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF6 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF6_SetInterruptHandler() method.
    This handler is called every time the IOCAF6 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF6_SetInterruptHandler(IOCAF6_DefaultInterruptHandler);

*/
void IOCAF6_DefaultInterruptHandler(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/