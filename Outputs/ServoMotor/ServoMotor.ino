#include <Servo.h>
Servo myservo;  // create servo object to control a servo

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
//clockwsie
  myservo.write(0);                  // sets the servo position according to the scaled value
  delay(1000);                           // waits for the servo to get there

//middle
  myservo.write(90);                  // sets the servo position according to the scaled value
  delay(1000);                           // waits for the servo to get there

//anti-clockwise
  myservo.write(180);                  // sets the servo position according to the scaled value
  delay(1000);                           // waits for the servo to get there


}
