#include <Servo.h>

Servo myServo;
int pos = 0;

void setup()
{
  Serial.begin(9600);
  myServo.attach(18); //18 is a PWM pin
}

void loop()
{
  //Sweep
  for (pos = 0; pos <= 180; pos++) { // goes from 0 degrees to 180 degrees
    myServo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(5);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos--) { // goes from 180 degrees to 0 degrees
    myServo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(5);                       // waits 15ms for the servo to reach the position
  }
}
