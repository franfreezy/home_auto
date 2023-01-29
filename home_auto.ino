#include "ir.h"
#include "lights.h"
#include "pins.h"
#include "communication.h"

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("powering up");
pinMode(relay1,OUTPUT);
pinMode(relay2,OUTPUT);
pinMode(relay3,OUTPUT);
pinMode(irsensor,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
irsensor1();
}
