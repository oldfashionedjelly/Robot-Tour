#include <AFMotor.h>

AF_DCMotor motor1(1); //blue FR
AF_DCMotor motor2(2); //white FL
AF_DCMotor motor3(3); //black BL
AF_DCMotor motor4(4); //red BR

const int buttonPin = 0;
int buttonState = 0; //low

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  buttonState = digitalRead(buttonPin); 
  //low = pressed (0)
  //high = not pressed (1)
  if (buttonState == LOW) {
    //start
    //go forward, turn, etc
    //Set speed here to stop motors from going before button is pressed
    int speed = 255;
    motor1.setSpeed(speed); //DO NOT SET SPEED LOWER THAN 110
    motor2.setSpeed(speed);
    motor3.setSpeed(speed);
    motor4.setSpeed(speed);
    int period = 1500;
    forward(period);
    right(period);
    back(period);
    left(period);
  }
}

// int speed (int percent) {
//   return map(percent, 0, 100, 0, 255);
// }

void right(int period) {
  motor1.run(BACKWARD);
  motor2.run(FORWARD);
  motor3.run(BACKWARD);
  motor4.run(FORWARD);
  delay(period);
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE);
}

void left(int period) {
  motor1.run(FORWARD);
  motor2.run(BACKWARD);
  motor3.run(FORWARD);
  motor4.run(BACKWARD); 
  delay(period);
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE);
}

void forward(int period) {
  motor1.run(FORWARD);
  motor2.run(FORWARD);
  motor3.run(FORWARD);
  motor4.run(FORWARD);
  delay(period);
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE);
}

void back(int period) {
  motor1.run(BACKWARD);
  motor2.run(BACKWARD);
  motor3.run(BACKWARD);
  motor4.run(BACKWARD);
  delay(period);
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE);
}