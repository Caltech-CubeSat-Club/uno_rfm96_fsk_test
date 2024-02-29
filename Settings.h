/*******************************************************************************************************
  Programs for Arduino - Copyright of the author Stuart Robinson - 02/03/20

  This program is supplied as is, it is up to the user of the program to decide if the program is
  suitable for the intended purpose and free from errors.
*******************************************************************************************************/

//*******  Setup hardware pin definitions here ! ***************

//These are the pin definitions for one of my own boards, the Easy Pro Mini,
//be sure to change the definitions to match your own setup. Some pins such as DIO1,
//DIO2, BUZZER are not used by this sketch so they do not need to be connected and
//should be set to -1.

#define NSS 6                                  //select pin on LoRa device
#define NRESET -1                               //reset pin on LoRa device
#define LED1 2                                  //on board LED, high for on
#define DIO0 7                                  //DIO0 pin on LoRa device, used for RX and TX done 
#define DIO1 -1                                 //DIO1 pin on LoRa device, normally not used so set to -1 
#define DIO2 -1                                 //DIO2 pin on LoRa device, normally not used so set to -1

#define LORA_DEVICE DEVICE_SX1276               //we need to define the device we are using


//*******  Setup LoRa Parameters Here ! ***************

//LoRa Modem Parameters
const uint32_t Frequency = 434000000;           //frequency of transmissions in hertz
const uint32_t Offset = 0;                      //offset frequency for calibration purposes

const int8_t TXpower = 20;                      //LoRa transmit power in dBm

const uint16_t packet_delay = 1000;             //mS delay between packets

