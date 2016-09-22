# arduinoCommunication

### How to communicate between Arduino and a computer, or between two Arduinos 

#### Experimenting with print() and println()

Use Serial Monitor to see the results

then try ![arduinoSend](arduinoSend/arduinoSend.ino)

#### Experimenting with Serial.parseInt()

````
if (Serial.available() > 0) {
    redValue = Serial.parseInt();
    greenValue = Serial.parseInt();
    }
````

Use top line of Serial Monitor to send messages from computer to Arduino

then try ![arduinoReceive](arduinoReceive/arduinoReceive.ino)

#### 
