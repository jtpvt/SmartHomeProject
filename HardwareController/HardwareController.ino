// HardwareController.ino
/*
 * Arduino hardware controller for smart home project
 */

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available())
  {
    char val = Serial.read();
  }
}
