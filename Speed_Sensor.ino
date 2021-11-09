const int speedSensorPin = D4 ;
const int ledPin = D0;

int statusSpeed = 0;
int c = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Micro Projects th");
  pinMode(ledPin, OUTPUT);
  pinMode(speedSensorPin, INPUT);
}

void loop() {
  statusSpeed = digitalRead(speedSensorPin);

  if (statusSpeed == HIGH) {
    digitalWrite(ledPin, HIGH);

    c++;
    if (c == 1) {
      Serial.println("************ Start ***********");
    }
    Serial.print(c);
    Serial.println(" : Led HIGH");
  }
  else {
    digitalWrite(ledPin, LOW);
    c = 0;
  }
}
