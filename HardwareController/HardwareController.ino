// HardwareController.ino
/*
 * Arduino hardware controller for Smart Home Project
 */

#include "IntruderAlert.h"
#include "NightLight.h"
#include "WeatherStation.h"

// general definitions
const int V_MAX = 1024,  // +5V
          V_MIN =    0;  //  0V

// object instantiations for smart home features
IntruderAlert  IA;
NightLight     NL;
WeatherStation WS;
          
void setup()
{
  Serial.begin(9600);

  IA.init();
  NL.init();
  WS.init();
}

void loop()
{
  
}
