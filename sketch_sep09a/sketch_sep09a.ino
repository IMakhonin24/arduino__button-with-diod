unsigned int lightSensor;
int criticalLightVal = 720;

void setup() {
  Serial.begin(9600);
  pinMode(4, OUTPUT);
}

void loop() {
  lightSensor = analogRead(7);

  if (lightSensor < criticalLightVal){
    digitalWrite(4, HIGH);
  }else{
    digitalWrite(4, LOW);
  }
} 
