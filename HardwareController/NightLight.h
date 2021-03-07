// Night Light
/*
 * The night light reads ambient brightness in a room to determine whether to activate or deactivate an LED.
 */

class NightLight
{
  private:
    const int PIN_LIGHT_LEVEL   =  A5,
              PIN_NIGHT_LIGHT   =  13,
              VOLTAGE_THRESHOLD = 800;

    void setLightStatus()
    {
      if (analogRead(PIN_LIGHT_LEVEL) > VOLTAGE_THRESHOLD)
      {
        digitalWrite(PIN_NIGHT_LIGHT, HIGH);
      }
      else
      {
        digitalWrite(PIN_NIGHT_LIGHT, LOW);
      }
    }

/*
 * 
 */

  public:
    void init()
    {
      pinMode(PIN_NIGHT_LIGHT, OUTPUT);
    }

    void call()
    {
      setLightStatus();
    }
};
