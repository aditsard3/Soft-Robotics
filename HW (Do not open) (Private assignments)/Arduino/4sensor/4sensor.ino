#define LFinger1 0
#define LFinger2 1
#define RFinger1 2
#define RFinger2 3
long frameCount;

void setup() {
  Serial.begin(1000000);
}

void loop() {
  activeHandRecording();
}

void activeHandRecording() {

  for(int i = 0; i < 4; i++) {
    format(i, analogRead(i), frameCount);
  }
  
 frameCount++;
  
}

/**
 * Normal MCI markdown
 * FingerNumber(1-5).Value(0-255).FrameNumber(0-15qdr)
 * Example
 * 2.255.21 - Left Pointer Finger, Value 255, Frame #21
 * 
 * FingerNum - Thumb (0), Pointer (1), Middle (2), Ring (3), Pinky (4)
 * Continue in sequence
 * SensorValue = 0-255
 * FrameCount 0-~15qdr
*/
 
String format(int fingerNum, int sensorValue, int frameCount) {
  
  Serial.print(fingerNum); //Print the finger
  Serial.print("."); //Delimeter
  
  Serial.print(sensorValue); //Print sensor value
  Serial.print("."); //Delimeter
  
  Serial.println(frameCount);
  
}

