int IRsensor= 2;

void setup() {
  Serial.begin(9600);
  pinMode(IRsensor, INPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  if (digitalRead(IRsensor) == HIGH) {
    Serial.println("OBSTICLE");
    digitalWrite(13, HIGH);
  } else if (digitalRead(23) == LOW) {
    Serial.println("CLEAR");
    digitalWrite(13, LOW);
  }
  delay(200);

}
