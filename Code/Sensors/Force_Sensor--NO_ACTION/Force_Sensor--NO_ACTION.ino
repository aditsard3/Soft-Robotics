int firstFingerForcePressure = 0;
int firstFingerForcePressureSensorPinInput = A0;        // value read from the pressure sensor via the amplifier stage

void setup() 
{
  pinMode(firstFingerForcePressureSensorPinInput, INPUT);
  Serial.begin(9600); 
  
}

void loop() 
{ 
  firstFingerForcePressure = analogRead(firstFingerForcePressureSensorPinInput);            
  Serial.print("The force pressure of the first finger is: ");
  Serial.println(firstFingerForcePressure);

  delay(750);                     
}
