boolean buttonFlag = 0;
boolean button;
boolean ledFlag = 0;
unsigned long lastPress;

void setup() {
  pinMode(3, INPUT_PULLUP);
  pinMode(4, OUTPUT);
}

void loop() {
  boolean button = !digitalRead(3);

  if(button == 1 && buttonFlag == 0 && millis()-lastPress > 100){
      buttonFlag = 1;
      ledFlag = !ledFlag;
      digitalWrite(4, ledFlag);
      lastPress = millis();
  }

  if(button == 0 && buttonFlag == 1){
      buttonFlag = 0;
  }
}
