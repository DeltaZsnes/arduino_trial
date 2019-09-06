int switchState = 0;
int counter = 0;
int lastState = 0;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
}

// the loop function runs over and over again forever
void loop() {
  switchState = digitalRead(2);

  if(switchState == HIGH){
    digitalWrite(LED_BUILTIN, HIGH);
  }
  else{
    digitalWrite(LED_BUILTIN, LOW);
  }

  if(switchState != lastState){
    lastState = switchState;

    if(switchState == HIGH){
      counter+=1;
    }
  }
  
  //delay(1000);

  if((counter >> 0) % 2){
    digitalWrite(3, HIGH);
  }
  else{
    digitalWrite(3, LOW);
  }

  if((counter >> 1) % 2){
    digitalWrite(4, HIGH);
  }
  else{
    digitalWrite(4, LOW);
  }

  if((counter >> 2) % 2){
    digitalWrite(5, HIGH);
  }
  else{
    digitalWrite(5, LOW);
  }
}
