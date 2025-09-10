


void setup() {
  // put your setup code here, to run once:

  //Set up which pin I would like to work on and labeling it what it's function should be
  pinMode(13,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

  // I made the LED Blink every half second:

  digitalWrite(13,HIGH);// HIGH means that the LED is on or at 5v

  delay(500);// since the program works in miliseconds, hald of a second in a milisecond is 500

  digitalWrite(13,LOW);// LOW means that the LED is off where voltage is removed

  delay(500); //another 500 miliseconds as a delay 

}
