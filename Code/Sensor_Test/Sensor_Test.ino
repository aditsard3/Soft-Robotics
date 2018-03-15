int sensorValue= A0;
int sensorPin = 0;        // value read from the pressure sensor via the amplifier stage
int firstFingerValve = 14;
void setup() 
{
  pinMode(14, OUTPUT);
  Serial.begin(9600); 
  
}

void loop() 
{ 
  sensorValue = analogRead(sensorPin);            
  Serial.print("Sensor Value = ");
  Serial.println(sensorValue);

  if(sensorValue > 23) {
    digitalWrite(firstFingerValve, LOW);
  }

  else {
    digitalWrite(firstFingerValve, HIGH);
  }
  delay(750);                     
}
