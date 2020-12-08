#include "CurieIMU.h"
float ax, ay, az;
void setup() {
  Serial.begin(9600);
  while (!Serial);
  CurieIMU.begin();
  CurieIMU.setAccelerometerRange(2);
}

void loop() {
  CurieIMU.readAccelerometerScaled(ax, ay, az);
  delay(10);
  Serial.print(ax);
  Serial.print(":");
  Serial.print(ay);
  Serial.println();
  Serial.flush();
}




