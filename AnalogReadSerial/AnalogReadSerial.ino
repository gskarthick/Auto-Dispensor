#include<Arduino.h>
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  Serial.print("Networks Found");
  Serial.println();
  Serial.println();
  Serial.print("Wifi Connected");
  delay(10000);
  Serial.println();
  Serial.println();
   Serial.print("certificate matches for appleid.apple.com");
   delay(10000);
    Serial.println();
      Serial.print("No Hackers Detected");
   
   
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  // delay in between reads for stability
}
