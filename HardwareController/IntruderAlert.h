// Intruder Alert
/*
 * The intruder alert takes readings from an ultrasonic sensor to determine whether there is an intruder.
 * 
 * Based on <https://www.nonscio.com/blog/q9gjkd7zg5llfkp0ghnfwecqy2oxas> and <https://youtu.be/wCOPLVgNpcY>
 * 
 */

class IntruderAlert
{
  private:
    const int PIN_ECHO = 7,
              PIN_TRIG = 8;

/*
 * 
 */

  public:
    void init()
    {
      pinMode(PIN_ECHO, INPUT);
      pinMode(PIN_TRIG, OUTPUT);
    }

    long determineDistance()
    {
      // send pulse through PIN_TRIG
      digitalWrite(PIN_TRIG, LOW);
      delayMicroseconds(2);  // buffer
      digitalWrite(PIN_TRIG, HIGH);
      delayMicroseconds(10);  // absolutely MUST be >=10us
      digitalWrite(PIN_TRIG, LOW);

      // calculate and set distance
      return pulseIn(PIN_ECHO, HIGH) / 58.8;
    }
};
 
