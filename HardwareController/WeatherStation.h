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
              PIN_AC     =  12,
              DIVIDE_R   = 270;  // resistor for voltage divider (Ohms)

    // Calculates and returns impedance (kOhms) with a 2-resistor voltage divider
    int calculateComponentImpedance(int voltage)
    {
      return DIVIDE_R / (1023 / voltage - 1); // component is R2
    }

    // Estimates humidity with logarithmic equation from a regression analysis of the dataset provided in the humidity sensor's datasheet
    float estimateRelativeHumidity(float impedance)
    {
      float humiMin = -9.49422 * log(0.0000342857 * impedance);  // logarithmic regression at 15degC (59degF)
      float humiMax = -10.1923 * log(0.0000895662 * impedance);  // logarithmic regression at 25degC (77degF)

      // TODO: Return estimate that's weighted based on the temperature. It's unlikely that temperature range will go outside a range of 15-25 degC (59-77 degF)
      
      return (humiMin + humiMax) / 2;
    }

    // Estimates temperature with a logarithmic equation from regression analysis of the dataset provided in the thermistor's datasheet
    float estimateTemperature(float impedance)
    {
      return -24.2268 * log(0.339014 * impedance); // logarithmic regression
    }

/*
 * 
 */

  public:
    void init() {}

    void call()
    {
      Serial.print("Humi: ");
      Serial.print(estimateRelativeHumidity(calculateComponentImpedance(A0)));
      Serial.print(" %RH\n");
      Serial.print("Temp: ");
      Serial.print(estimateTemperature(calculateComponentImpedance(A1)));
      Serial.print(" degC\n\n");
    }
};
