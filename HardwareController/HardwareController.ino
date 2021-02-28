// HardwareController.ino
/*
 * Arduino hardware controller for Smart Home Project
 */

#include "WeatherStation.h"

// general definitions
const int V_MAX = 1024,  // +5V
          V_MIN =    0;  //  0V

WeatherStation WS;
          
void setup()
{
  Serial.begin(9600);
  WS.init();
}

void loop()
{
  
}
