// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {


  
  digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(5, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(6, HIGH); 
  digitalWrite(6, LOW); 
  delay(100);



 digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);
  digitalWrite(5, LOW);    // turn the LED off by making the voltage LOW
  delay(100);



  delay(1500);

}
