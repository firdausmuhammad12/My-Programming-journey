
const int buttonPin = 26;     
const int buzzerPin =  27;     
int buttonState = 0;        
void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    digitalWrite(buzzerPin, HIGH);
  } else {
    digitalWrite(buzzerPin, LOW);
  }
}
