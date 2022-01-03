#include <SoftwareSerial.h>
SoftwareSerial bSerial(8, 9);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  bSerial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
//  bSerial.println("[{17|25.5}{18|50}{20|121}{22|8}]");
  bSerial.println("[{18|50}{17|25.5}{20|121}{21|121}{12|8}]");

  delay(1000);

}

// Arduino Pro/ Pro Mini
// ATMega328P (5V 16MHz)
// Port: COM9
