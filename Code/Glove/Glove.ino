//this code has all actuators at the same pressure at thr same time

int sensorPin = A0;   //analog pin reading from one pressure sensor keading to the splitter for all the fingers
int pressureValue = 0;  //set initial value for the pressure value to  zero

int fingerOne = 10;  //variable for the finger valve controlled by the mosfet/splitter
int fingerTwo = 11;  //variable for the finger valve controlled by the mosfet/splitter
int figerThree = 12; //variable for the finger valve controlled by the mosfet/splitter
int fingerFour = 13; //variable for the finger valve controlled by the mosfet/splitter

void setup() {
  
  Serial.begin(9600);

  pinMode(fingerOne, OUTPUT);
  pinMode(fingerTwo, OUTPUT);
  pinMode(fingerThree, OUTPUT);
  pinMode(fingerFour, OUTPUT);
  
}

void loop() {
  
  pressureValue = analogRead(sensorPin);
  Serial.print("Pressure Value = ");
  Serial.println(pressureValue);

  if (pressureValue > 23 && pressureValue < 27) { //change this to much higher because this is the main sensor reading which is then being split by four tubes for each of the fingers
    digitalWrite(fingerOne, HIGH);
    digitalWrite(fingerOne, HIGH);
    digitalWrite(fingerOne, HIGH);
    digitalWrite(fingerOne, HIGH);
  }

  else {

    digitalWrite(fingerOne, LOW);
    digitalWrite(fingerOne, LOW);
    digitalWrite(fingerOne, LOW);
    digitalWrite(fingerOne, LOW);
  }


}
