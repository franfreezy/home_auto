#include "pins.h"

void irsensor1(){

int state=0;
state=digitalRead(irsensor);
//Serial.println(state);
if (state==HIGH){
  Serial.println(state);
//send to me a message over mqtt code +sms
Serial.println("no one at the door");

}
if(state==LOW){
  Serial.println("intruder in the house");
  
}
}