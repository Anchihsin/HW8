// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {


  
  digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);
  digitalWrite(5, LOW);    // turn the LED off by making the voltage LOW
  delay(500);



  digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);
  digitalWrite(6, LOW);    // turn the LED off by making the voltage LOW
  delay(200);

  digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);
  digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
  delay(100);



  delay(1000);

}
