// Night Light
/*
 * The night light reads ambient brightness in a room to determine whether to activate or deactivate an LED.
 */

 #define ANALOG_IN A0

 class NightLight
 {
  public:
    void init() {}

    // returns voltage divider result as 10-bit int (0 = 0V, 1024 = 5V)
    int dividedVoltage()
    {
      return analogRead(A0);
    }
 };
