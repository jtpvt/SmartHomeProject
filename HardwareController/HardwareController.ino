// HardwareController.ino
/*
 * Arduino hardware controller for Smart Home Project
 */

#include "NightLight.h"
#include "WeatherStation.h"

// general definitions
const int V_MAX = 1024,  // +5V
          V_MIN =    0;  //  0V

NightLight     NL;
WeatherStation WS;
          
void setup()
{
  Serial.begin(9600);

  NL.init();
  WS.init();
}

void loop()
{
  
}
