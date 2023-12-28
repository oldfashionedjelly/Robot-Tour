//button testing

const int buttonPin = 0;
int buttonState = 0;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    Serial.println("Hi");
  } else {
    Serial.println("Hello");
  }
}