#include <SoftwareSerial.h>

 
SoftwareSerial bt(2, 3); 

void setup() {
  bt.begin(9600); 
  Serial.begin(9600); 
  pinMode(13, OUTPUT); 
}

void loop() {
  if (bt.available()) { 
    char received = bt.read(); 
    Serial.write(received); 
    if (received == '1') {
      digitalWrite(13, HIGH); 
    } else if (received == '0') {
      digitalWrite(13, LOW); 
    }
  }
}