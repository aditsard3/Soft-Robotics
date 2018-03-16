int chamberOne = 10;
int chamberTwo = 11;
int chamberThree = 12;
int chamberFour = 13;

void setup() {
  // put your setup code here, to run once:
pinMode(chamberOne, OUTPUT);
pinMode(chamberTwo, OUTPUT);
pinMode(chamberThree, OUTPUT);
pinMode(chamberFour, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly

digitalWrite(chamberOne, HIGH);
delay(2000);
digitalWrite(chamberOne, LOW);

digitalWrite(chamberTwo, HIGH);
delay(2000);
digitalWrite(chamberTwo, LOW);

digitalWrite(chamberThree, HIGH);
delay(2000);
digitalWrite(chamberThree, LOW);

digitalWrite(chamberFour, HIGH);
delay(2000);
digitalWrite(chamberFour, LOW);


}


