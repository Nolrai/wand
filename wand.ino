#include <MPU9250.h>

int ledPin = 13;      // LED connected to digital pin 9
int analogPin = 0;   // potentiometer connected to analog pin 3
int val = 0;         // variable to store the read value
int analogWriteMax = 255;

void setup() {
  pinMode(ledPin, OUTPUT);  // sets the pin as output
}

void loop() {
  val = analogRead(analogPin);  // read the input pin
  analogWrite(ledPin, val / 4 ); // analogRead values go from 0 to 1023, analogWrite values from 0 to 255
}

