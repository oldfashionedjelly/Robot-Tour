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
  motor1.run(FORWARD);
  motor2.setSpeed(speed(100));
  motor2.run(BACKWARD);
  motor3.setSpeed(speed(100));
  motor3.run(BACKWARD);
  motor4.setSpeed(speed(100));
  motor4.run(FORWARD);
}

void init (int speed) {
  //go out half a block
  //turn 180
}

void leftBlock(int speed) {

}

void rightBlock(int speed) {

}

void forwardBlock(int speed) {

}

void turnLeft() {

}

void turnRight() {

}

int speed(int percent) {
  return map(percent, 0, 100, 0, 255);
}
