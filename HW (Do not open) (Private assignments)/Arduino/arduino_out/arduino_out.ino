#define LFinger1 25
#define LFinger2 26
#define LFinger3 27
#define LFinger4 28
#define RFinger1 29
#define RFinger2 30
#define RFinger3 31
#define RFinger4 32

void setup() {
  long frameCount;
}

void loop() {
}

void activeHandRecording(int fps) {
  
  delay(1000/fps); //Delay at FPS speed
  for(int i = 0; i < 10; i++) {
    format(i, analogRead(i + 25), frameCount);
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

