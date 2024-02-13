/*
11-29-23
Attempt to control brushless ESC.
Isaiah M.
*/

#include <Servo.h>

const int M1_pin = 3;

Servo motor_1;


void setup() {
  // put your setup code here, to run once:
  motor_1.attach(M1_pin);
}

void loop() {
  // put your main code here, to run repeatedly:
  motor_1.write(0);
  delay(1000);
  motor_1.write(90);
  delay(1000);
  motor_1.write(0);
  delay(1000);
  motor_1.write(110);
  delay(1000);
  motor_1.write(0);
  delay(1000);
  motor_1.write(70);
  delay(1000);
}
