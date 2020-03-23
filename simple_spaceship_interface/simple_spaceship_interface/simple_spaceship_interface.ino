int switchState = 0;
void setup() {
  // define input: a switch
  pinMode(2, INPUT);
  // define outputs: LED lights
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

}

void loop() {
  // read the input switch to see if LOW or HIGH
  // if LOW, then button is not pressed
  switchState = digitalRead(2);

  if(switchState == LOW) {
    // button not pressed
    digitalWrite(3, HIGH); 
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  }
  else {
    // button is pressed
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);

    // initialize the red led
    delay(1000); // wait 1 second
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    // the for loop is mocking this spaceship interface calc'ing something :)
    for (int i = 0; i <= 10; i++) {
      if (i % 2 == 0) {
        delay(500); // wait .1 second 
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);  
      }
      else {
        delay(500); // wait .1 second  
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);        
      }
      
    
    }

  }
}
