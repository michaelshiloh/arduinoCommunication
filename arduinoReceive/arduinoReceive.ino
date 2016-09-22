const int greenLedPin = 11;
const int redLedPin = 10;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int redValue;
  int greenValue;

  if (Serial.available() > 0) {
    redValue = Serial.parseInt();
    greenValue = Serial.parseInt();

    // Map the potentiometer values to those 
    // suitable for analogWrite()
    pot0 = map(pot0, 0, 1023, 0, 255);
    pot1 = map(pot1, 0, 1023, 0, 255);

    // Constrain the values, just in case 
    // something was outside the expected range
    pot0 = constrain(pot0, 0, 255);
    pot1 = constrain(pot1, 0, 255);

    analogWrite(redLedPin, redValue);
    analogWrite(greenLedPin, greenValue);
  }
}
