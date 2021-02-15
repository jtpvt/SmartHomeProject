// HardwareController.ino
/*
 * Arduino hardware controller for smart home project
 */

// universal component pins
#define IN_bluetooth 1
#define OUT_display  2
#define OUT_speaker  3

// weather station pins
#define IN_thermistor      4
#define IN_humiditySensor  5
#define OUT_airConditioner 6
#define OUT_heater         7

// night light pins
#define IN_photoresistor 8
#define OUT_nightLight   9

// intruder alert pins
#define IN_ultrasonicSensor 10

void setup()
{
  // set up input pins
  pinMode(IN_bluetooth, INPUT);
  pinMode(IN_thermistor, INPUT);
  pinMode(IN_humiditySensor, INPUT);
  pinMode(IN_photoresistor, INPUT);
  pinMode(IN_ultrasonicSensor, INPUT);

  // set up output pins
  pinMode(OUT_display, OUTPUT);
  pinMode(OUT_speaker, OUTPUT);
  pinMode(OUT_airConditioner, OUTPUT);
  pinMode(OUT_heater, OUTPUT);
  pinMode(OUT_nightLight, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  if (Serial.available())
  {
    char val = Serial.read();
    
    switch(val)
    {
      case 't':
        digitalWrite(OUT_nightLight, HIGH);
        break;
      case 'r':
        digitalWrite(OUT_nightLight, LOW);
        break;
      default:
        Serial.print("Invalid input");
        break;
    }
  }
}
