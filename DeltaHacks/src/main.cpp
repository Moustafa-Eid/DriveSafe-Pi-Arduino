#include <Arduino.h>

/*
  AnalogReadSerial

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/AnalogReadSerial
*/

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  pinMode(6,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(7,INPUT);

  Serial.begin(9600);
}

void alarm(int ndelay) {
  digitalWrite(6,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  delay(ndelay);
  digitalWrite(6,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(8,LOW);
  delay(ndelay);
}

// the loop routine runs over and over again forever:
void loop() {
  Serial.println(digitalRead(7));
  if(digitalRead(7) == 1) {
    alarm(500);
  }
  else {
    digitalWrite(6,LOW); 
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
  }
}


