// Weather Station
/*
 * The weather station reads room temperature and humidity to determine whether to
 * activate or deactivate air conditioner or heater.
 */

class WeatherStation
{
  private:
    const int DIVIDE_R = 270,   // resistor for voltage divider (Ohms)
              SOURCE_V = 1024;  // max 10-bit int = 5V
    float temperatureC,  // temperature (degC)
          humidity;      // relative humidity (%RH)
    int thermistorZ, humiditySensorZ;  // impedances of components (kOhms)

/*
 * 
 */

  public:
    void init() {}

    // Calculates and returns impedance (kOhms) with a 2-resistor voltage divider
    int calculateComponentImpedance(int voltage)
    {
      return DIVIDE_R * (SOURCE_V / voltage - 1); // If component is R1
      //return DIVIDE_R / (SOURCE_V / voltage - 1); // If component is R2
    }
};
