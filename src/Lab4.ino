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