// Weather Station
/*
 * The weather station reads room temperature and humidity to determine whether to
 * activate or deactivate air conditioner or heater.
 */

#include <math.h>

class WeatherStation
{
  private:
    const int PIN_HEATER =  11,
              PIN_AC     =  12;  // resistor for voltage divider (Ohms)
    // thermistor constants
    const int B_CONSTANT          =  3936,  // Thermistor characteristic constant (Kelvin, K)
              RESISTANCE_CONSTANT = 10000;  // Resistance at ambient temperature constant (Ohms)
    const float TEMP_CONSTANT = 298.15;  // Ambient temperature constant, 25degC (Kelvin, K)

    // Calculates and returns impedance (Ohms) with a 2-resistor voltage divider
    int calculateComponentResistance(float divideR, int voltageDrop)
    {
      return divideR / (1023.0 / voltageDrop - 1.0); // component is R2
    }

    // Estimates humidity with logarithmic equation from a regression analysis of the dataset provided in the humidity sensor's datasheet
    float estimateRelativeHumidity(float resistance)
    {
      float humiMin = -9.49422 * log(0.0000342857 * resistance);  // logarithmic regression at 15degC (59degF)
      float humiMax = -10.1923 * log(0.0000895662 * resistance);  // logarithmic regression at 25degC (77degF)

      // TODO: Replace current equations with new equations
      // TODO: Return estimate that's weighted based on the temperature. It's unlikely that temperature range will go outside a range of 15-25 degC (59-77 degF)
      
      return (humiMin + humiMax) / 2;
    }

    // Estimates and returns temperature (degC) with equation provided in thermistor's datasheet
    float estimateTemperature(float resistance)
    {
      return 1.0/(log(resistance/RESISTANCE_CONSTANT)/B_CONSTANT + 1.0/TEMP_CONSTANT) - 273.15;  // temp_C = temp_K - 273.15
    }

/*
 * 
 */

  public:
    void init() {}

    void call()
    {
      Serial.print("Humi: ");
      Serial.print(estimateRelativeHumidity(calculateComponentResistance(10000, analogRead(A0))));
      Serial.print(" %RH\n");
      Serial.print("Temp: ");
      Serial.print(estimateTemperature(calculateComponentResistance(10000, analogRead(A4))));
      Serial.print(" degC\n\n");
    }
};
