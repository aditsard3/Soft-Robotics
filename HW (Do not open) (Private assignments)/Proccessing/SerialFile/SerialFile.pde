import processing.serial.*;
Serial mySerial;
PrintWriter output;
void setup() {
   mySerial = new Serial(this, Serial.list()[0], 2000000);
   output = createWriter("data_" + month() + "-" + day() + "-" + year() + "_" + hour() + ":" + minute() + ".mci");
}
void draw() {
    if (mySerial.available() > 0 ) {
         String value = mySerial.readString();
         if ( value != null ) {
              output.print(value + ",");
         }
    }
}

void keyPressed() {
    output.flush();  // Writes the remaining data to the file
    output.close();  // Finishes the file
    exit();  // Stops the program
}
