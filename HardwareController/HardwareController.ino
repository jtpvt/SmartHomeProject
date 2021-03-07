// HardwareController.ino
/*
 * Arduino hardware controller for Smart Home Project
 */

#include "AudioAlert.h"
#include "Bluetooth.h"
#include "InfoDisplay.h"
#include "IntruderAlert.h"
#include "NightLight.h"
#include "WeatherStation.h"

// general definitions
const int V_MAX = 1023,  // +5V
          V_MIN =    0;  //  0V

// object instantiations for smart home features
AudioAlert     AA;
Bluetooth      BT;
InfoDisplay    ID;
IntruderAlert  IA;
NightLight     NL;
WeatherStation WS;
          
void setup()
{
  Serial.begin(9600);

  AA.init();
  BT.init();
  ID.init();
  IA.init();
  NL.init();
  WS.init();
}

void loop()
{
  
}

void printVoltage(int pin)
{
  Serial.print(analogRead(pin));
  Serial.print("\t");
}
