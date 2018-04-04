int firstFingerAirPressure = 0;
int firstFingerAirPressureSensorPinInput = A0;        // value read from the pressure sensor via the amplifier stage
void setup() 
{
  pinMode(firstFingerAirPressureSensorPinInput, INPUT);
  Serial.begin(9600); 
  
}

void loop() 
{ 
  firstFingerAirPressure = analogRead(firstFingerAirPressureSensorPinInput);            
  Serial.print("The air pressure of the first finger is: ");
  Serial.println(firstFingerAirPressure);
  
  delay(750);                     
}
