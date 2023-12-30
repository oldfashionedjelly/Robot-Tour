unsigned long startMillis;
unsigned long currentMillis;
const unsigned long period = 5000;

void setup() {
  Serial.begin(9600);
  startMillis = millis();
}

void loop() {
  currentMillis = millis();
  if (currentMillis - startMillis >= period) {
    Serial.println("hello");
    //stop
  } else {
    Serial.println("hi");
    //do
  }
}