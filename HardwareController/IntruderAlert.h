// Intruder Alert
/*
 * The intruder alert takes readings from an ultrasonic sensor to determine whether there is an intruder.
 * 
 * Based on <https://www.nonscio.com/blog/q9gjkd7zg5llfkp0ghnfwecqy2oxas> and <https://youtu.be/wCOPLVgNpcY>
 * 
 */

 #define ECHO 7
 #define TRIG 8

 class IntruderAlert
 {
    public:
      void init()
      {
        pinMode(ECHO, INPUT);
        pinMode(TRIG, OUTPUT);
      }

      long determineDistance()
      {
        // send pulse through TRIG
        digitalWrite(TRIG, LOW);
        delayMicroseconds(2);  // buffer
        digitalWrite(TRIG, HIGH);
        delayMicroseconds(10);  // absolutely MUST be >=10us
        digitalWrite(TRIG, LOW);

        // calculate and set distance
        return pulseIn(ECHO, HIGH) / 58.8;
      }
 };
 
