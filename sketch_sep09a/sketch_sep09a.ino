void setup() {
  pinMode(5, INPUT_PULLUP);
  pinMode(13, OUTPUT);
}

void loop() {
  boolean button = !digitalRead(5);
  
  if(!!button){
      digitalWrite(13, HIGH);
  }else{
      digitalWrite(13, LOW);
  }
  
}
