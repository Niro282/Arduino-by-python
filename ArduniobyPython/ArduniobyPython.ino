const int redPin = 12;
const int greenPin = 8;

void setup() {
  Serial.begin(9600);
  pinMode(greenPin, OUTPUT);
  pinMode(redPin, OUTPUT);
}

void loop() {
  if (Serial.available() > 0){
    String msg = Serial.readString();

    if (msg == "ON"){
      digitalWrite(greenPin, HIGH);
    }
    else if (msg == "OFF"){
      digitalWrite(greenPin, LOW);
    }
    else {
      for (int i = 0; i < 5; i++){
        digitalWrite(redPin, HIGH);
        delay(100);
        digitalWrite(redPin, LOW);
        delay(100);
      }
    }
  }
}
