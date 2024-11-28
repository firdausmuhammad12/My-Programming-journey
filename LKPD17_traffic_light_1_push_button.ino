const int buttonPin = 26;     
const int redPin =  13;  
const int yellowPin =  12;  
const int greenPin =  14;             
void setup() {
  pinMode(redPin, OUTPUT);
   pinMode(yellowPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
 int  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    digitalWrite(redPin, HIGH);
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, LOW);
  } else {
   digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, HIGH);
    delay(1000);
     digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, HIGH);
    delay(1000);
     digitalWrite(greenPin, LOW);
  }
}
