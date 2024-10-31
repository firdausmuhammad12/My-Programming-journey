const int trigPin = 15;
const int echoPin = 2;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
long duration, distance;
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance = duration * 0.034 / 2;
if (distance > 200) {
  Serial.println("tidak ada objek terdeteksi");
}else{
  Serial.print("jarak: ");
  Serial.print(distance);
  Serial.println(" cm");
}
delay(500);
}
