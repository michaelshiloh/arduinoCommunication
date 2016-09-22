void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
   int red = Serial.parseInt();
   int green = Serial.parseInt();
   int blue = Serial.parseInt();
  }
}
