# arduinoCommunication

### How to communicate between Arduino and a computer, or between two Arduinos 

#### Experimenting with print() and println()

Wire up potentiometer like we did last week (good review). Add a second sensor, and figure out a way to print both the first and the second values. Learn the difference between print() and println().

Use Serial Monitor to see the results.

then try ![arduinoSend](arduinoSend/arduinoSend.ino)

#### Experimenting with Serial.parseInt()

If Arduino can send, can it also receive? Yes. Many methods. We'll use parseInt() which is part of the Serial class.

````
if (Serial.available() > 0) {
    redValue = Serial.parseInt();
    greenValue = Serial.parseInt();
    }
````

Use top line of Serial Monitor to send messages from computer to Arduino

then try ![arduinoReceive](arduinoReceive/arduinoReceive.ino)

### How to communicate between two Arduinos 

1. One Arduino gets ![arduinoSend](arduinoSend/arduinoSend.ino), the other gets  ![arduinoReceive](arduinoReceive/arduinoReceive.ino)
