// Bluetooth
/*
 * The Bluetooth module connects a PC to the smart home via a Bluetooth connection.
 * It will interface with the software controller, which is built with Processing IDE.
 */

class Bluetooth
{
  private:
    char val; // serial value received
  public:
    void init() {}

    void call()
    {
      if (Serial.available())
      {
        val = Serial.read();
        switch(val)
        {
          default:
            Serial.print("Bluetooth did not receive valid reading!\n");
            break;
        }
      }
      delay(100); // 100ms delay
    }
};
