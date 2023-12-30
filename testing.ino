#include <AFMotor.h>

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

unsigned long startMillis;
unsigned long currentMillis;
const unsigned long period = 5000;

void setup() {
  Serial.begin(9600);
  startMillis = millis();
  motor1.setSpeed(255); //don't set speed lower than 110
  motor2.setSpeed(255);
  motor3.setSpeed(255);
  motor4.setSpeed(255);
}

void loop() {
  currentMillis = millis();
  if (currentMillis - startMillis < period) {
    motor1.run(FORWARD);
    motor2.run(FORWARD);
    motor3.run(FORWARD);
    motor4.run(FORWARD);
  } 
  else {
    motor1.run(RELEASE); //setSpeed(0)
    motor2.run(RELEASE);
    motor3.run(RELEASE);
    motor4.run(RELEASE);
  }
}