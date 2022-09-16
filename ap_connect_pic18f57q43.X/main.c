/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC18F57Q43
        Driver Version    :  2.00
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

#include "mcc_generated_files/mcc.h"
#include "../winc/include/winc.h"
#include "../winc/include/winc_legacy.h"

/*
                         Main application
 */
void wifi_cb(uint8_t u8WiFiEvent, const void *const pvMsg);

void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();
    
    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global Interrupts
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();
    
    winc_adapter_init();
    tstrWifiInitParam   param;
    m2m_memset((uint8_t *)&param, 0, sizeof(param));
    param.pfAppWifiCb   = wifi_cb;
    
    int8_t ret = m2m_wifi_init(&param);
    if (M2M_SUCCESS != ret){
        printf("main: m2m_wifi_init call error!(%d)\r\n", ret);
        while(1);
    }
    
    ret = m2m_wifi_connect((char *)CFG_MAIN_WLAN_SSID, sizeof(CFG_MAIN_WLAN_SSID), CFG_MAIN_WLAN_AUTH, (void *)CFG_MAIN_WLAN_PSK, M2M_WIFI_CH_ALL);
    

    while (1)
    {
        // Add your application code
         m2m_wifi_handle_events(NULL);
    }
}


void wifi_cb(uint8_t u8WiFiEvent, const void *const pvMsg)
{
    switch(u8WiFiEvent)
    {
    case M2M_WIFI_RESP_CON_STATE_CHANGED:
        {
             tstrM2mWifiStateChanged *pstrWifiState = (tstrM2mWifiStateChanged *) pvMsg;
             if (pstrWifiState->u8CurrState == M2M_WIFI_CONNECTED) {
                  printf("Wi-Fi connected\r\n");
            } else if (pstrWifiState->u8CurrState == M2M_WIFI_DISCONNECTED) {
                printf("Wi-Fi disconnected\r\n");
            }
             
            break;
        }
    
    case M2M_WIFI_REQ_DHCP_CONF:
        {
            uint8_t *pu8IPAddress = (uint8_t *) pvMsg;
            printf("Wi-Fi IP is %u.%u.%u.%u\r\n",
                    pu8IPAddress[0], pu8IPAddress[1], pu8IPAddress[2], pu8IPAddress[3]);
            break;
        }
       
    default:
        break;
    }
}

/**
 End of File
*/