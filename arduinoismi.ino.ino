//the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 3 as an output
  pinMode(3, OUTPUT);
}

//the loop function runs over and over again forever
void loop() {
  digitalWrite(3, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(4000);            // wait for a second
  digitalWrite(3, LOW);   // turn the lED off by making the voltage Low
  delay(4000);            // wait for a second
}
