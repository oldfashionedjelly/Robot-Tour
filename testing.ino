#include <AFMotor.h>

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

unsigned long startMillis;
unsigned long currentMillis;
const unsigned long period = 10000;

void setup() {
  Serial.begin(9600);
  startMillis = millis();
}

void loop() {
  currentMillis = millis();
  motor1.setSpeed(speed(100));
  motor1.run(FORWARD);
  motor2.setSpeed(speed(100));
  motor2.run(FORWARD);
  motor3.setSpeed(speed(100));
  motor3.run(FORWARD);
  motor4.setSpeed(speed(100));
  motor4.run(FORWARD);
  if (currentMillis - startMillis >= period) {
    Serial.println("hello");
    motor1.run(RELEASE);
    motor2.run(RELEASE);
    motor3.run(RELEASE);
    motor4.run(RELEASE);
  }
}

int speed(int percent) {
  return map(percent, 0, 100, 0, 255);
}