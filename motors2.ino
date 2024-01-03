int motor1DirectionPin = 2;          
int motor1SpeedPin = 3;      //pwm

int motor2DirectionPin = 4;
int motor2SpeedPin = 5;      //pwm

int motor3DirectionPin = 7;          
int motor3SpeedPin = 6;      //pwm

int motor4DirectionPin = 8; 
int motor4SpeedPin = 10;     //pwm

const int buttonPin = 0;
int buttonState = 0; 

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT_PULLUP);

  pinMode(motor1DirectionPin, OUTPUT);
  pinMode(motor1SpeedPin, OUTPUT);

  pinMode(motor2DirectionPin, OUTPUT);
  pinMode(motor2SpeedPin, OUTPUT);

  pinMode(motor3DirectionPin, OUTPUT);
  pinMode(motor3SpeedPin, OUTPUT);

  pinMode(motor4DirectionPin, OUTPUT);
  pinMode(motor4SpeedPin, OUTPUT);

  analogWrite(motor1SpeedPin, 150);
  analogWrite(motor2SpeedPin, 150);
  analogWrite(motor3SpeedPin, 150);
  analogWrite(motor4SpeedPin, 150);
}

void loop() {
  buttonState = digitalRead(buttonPin); 
  if (buttonState == LOW) {
    int period = 1500;
    forward(period);
  }
}


void right(int period) {
  digitalWrite(motor1DirectionPin, LOW);
  digitalWrite(motor2DirectionPin, HIGH);
  digitalWrite(motor3DirectionPin, LOW);
  digitalWrite(motor4DirectionPin, HIGH);
  delay(period);
  analogWrite(motor1SpeedPin, 0);
  analogWrite(motor2SpeedPin, 0);
  analogWrite(motor3SpeedPin, 0);
  analogWrite(motor4SpeedPin, 0);
}

void left(int period) {
  digitalWrite(motor1DirectionPin, HIGH);
  digitalWrite(motor2DirectionPin, LOW);
  digitalWrite(motor3DirectionPin, HIGH);
  digitalWrite(motor4DirectionPin, LOW);
  delay(period);
  analogWrite(motor1SpeedPin, 0);
  analogWrite(motor2SpeedPin, 0);
  analogWrite(motor3SpeedPin, 0);
  analogWrite(motor4SpeedPin, 0);
}

void forward(int period) {
  digitalWrite(motor1DirectionPin, HIGH);
  digitalWrite(motor2DirectionPin, HIGH);
  digitalWrite(motor3DirectionPin, HIGH);
  digitalWrite(motor4DirectionPin, HIGH);
  delay(period);
  analogWrite(motor1SpeedPin, 0);
  analogWrite(motor2SpeedPin, 0);
  analogWrite(motor3SpeedPin, 0);
  analogWrite(motor4SpeedPin, 0);
}

void back(int period) {
  digitalWrite(motor1DirectionPin, LOW);
  digitalWrite(motor2DirectionPin, LOW);
  digitalWrite(motor3DirectionPin, LOW);
  digitalWrite(motor4DirectionPin, LOW);
  delay(period);
  analogWrite(motor1SpeedPin, 0);
  analogWrite(motor2SpeedPin, 0);
  analogWrite(motor3SpeedPin, 0);
  analogWrite(motor4SpeedPin, 0);
}