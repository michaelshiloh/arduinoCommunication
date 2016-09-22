/* 
 *  arduinoSend - read two potentiometers and send them out the serial port using print()
 *  
 *  Circuit - two potentiometers, one each on A0 and A1
 *  
 *  Created 9/22/16 by Michael Shiloh. Based on ideas from  
 *  https://itp.nyu.edu/physcomp/labs/labs-serial-communication/serial-output-from-an-arduino/ 
 *  by Tom Igoe
 *  
 *  modifications
 *  
 *  This code is in the public domain
*/

void setup() {
  Serial.begin(9600);
}

void loop() {

  // Read the two potentiometers
  int pot0 = analogRead(A0);
  int pot1 = analogRead(A1);

  Serial.print(pot0); // send the value of the first potentiometer
  Serial.print(",");  // comma separates the two
  Serial.print(pot1); // send the valuse of the second potentiometer
  
  Serial.println();   // newline signifies the end of the message
}
