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
    motor1.setSpeed(255); //DO NOT SET SPEED LOWER THAN 110
    motor2.setSpeed(255);
    motor3.setSpeed(255);
    motor4.setSpeed(255);
  }
}

// int speed (int percent) {
//   return map(percent, 0, 100, 0, 255);
// }

void rightBlock() {
  motor1.run(BACKWARD);
  motor2.run(FORWARD);
  motor3.run(BACKWARD);
  motor4.run(FORWARD);
}

void lefttBlock() {
  motor1.run(FORWARD);
  motor2.run(BACKWARD);
  motor3.run(FORWARD);
  motor4.run(BACKWARD); 
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
  motor1.run(BACKWARD);
  motor2.run(FORWARD);
  motor3.run(BACKWARD);
  motor4.run(FORWARD);
}

void halfRight() {
  motor1.run(FORWARD);
  motor2.run(BACKWARD);
  motor3.run(FORWARD);
  motor4.run(BACKWARD);  
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
