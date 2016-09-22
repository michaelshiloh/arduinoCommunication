const int greenLedPin = 11;
const int redLedPin = 10;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int redValue;
  int greenValue;

  // Read the two potentiometers
  int pot0 = analogRead(A0);
  int pot1 = analogRead(A1);

  Serial.print(pot0); // send the value of the first potentiometer
  Serial.print(",");  // comma separates the two
  Serial.print(pot1); // send the valuse of the second potentiometer
  
  Serial.println();   // newline signifies the end of the message


  if (Serial.available() > 0) {
    redValue = Serial.parseInt();
    greenValue = Serial.parseInt();

    // Map the potentiometer values to those 
    // suitable for analogWrite()
    redValue = map(redValue, 0, 1023, 0, 255);
    greenValue = map(greenValue, 0, 1023, 0, 255);

    // Constrain the values, just in case 
    // something was outside the expected range
    redValue = constrain(redValue, 0, 255);
    greenValue = constrain(greenValue, 0, 255);

    analogWrite(redLedPin, redValue);
    analogWrite(greenLedPin, greenValue);
  }
}
