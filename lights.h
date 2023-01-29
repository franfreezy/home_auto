#include "pins.h"
//my relays are active-low this applies to active low relays
void light1_on(){
digitalWrite(relay1,LOW);  
}
void light1_off(){
digitalWrite(relay1,HIGH);  
}

void light2_on(){
digitalWrite(relay2,LOW);  
}
void light2_off(){
digitalWrite(relay2,HIGH);  
}
void light3_on(){
digitalWrite(relay3,LOW);  
}
void light3_off(){
digitalWrite(relay3,HIGH);  
}
