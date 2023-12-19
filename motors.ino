#include <AFMotor.h>

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

void setup() {
  Serial.begin(9600);
}

void loop() {
  motor1.setSpeed(speed(100));
  motor2.setSpeed(speed(100));
  motor3.setSpeed(speed(100));
  motor4.setSpeed(speed(100));
}

void init () {
  
}

void leftBlock() {

}

void rightBlock() {

}

void forwardBlock() {
  motor1.run(FORWARD);
  motor2.run(FORWARD);
  motor3.run(FORWARD);
  motor4.run(FORWARD);
}

void backBlock() {
  motor1.run(BACKWARD);
  motor2.run(BACKWARD);
  motor3.run(BACKWARD);
  motor4.run(BACKWARD);
}

void halfLeft() {

}

void halfRight() {
  
}

void halfForward() {
  motor1.run(FORWARD);
  motor2.run(FORWARD);
  motor3.run(FORWARD);
  motor4.run(FORWARD);
}

void halfBack() {
  motor1.run(BACKWARD);
  motor2.run(BACKWARD);
  motor3.run(BACKWARD);
  motor4.run(BACKWARD);
}

int speed (int percent) {
  return map(percent, 0, 100, 0, 255);
}
