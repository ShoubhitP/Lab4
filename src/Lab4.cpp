/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/shoubhitsstuff/Desktop/Lab4/src/Lab4.ino"
void setup();
void loop();
#line 1 "/Users/shoubhitsstuff/Desktop/Lab4/src/Lab4.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);



bool value;

void setup() {

pinMode(D5, OUTPUT);
pinMode(D7, INPUT);



}


void loop() {
  
value = digitalRead(D7);
if(value == true) {

    digitalWrite(D5, HIGH); //turning on the LED if the button is pressed

}
else {

    digitalWrite(D5, LOW);

}



}