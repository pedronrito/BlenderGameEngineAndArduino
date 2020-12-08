#include "CurieIMU.h"
float ax, ay, az;

int data;

void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  digitalWrite (13, LOW);

  CurieIMU.begin();
  CurieIMU.setAccelerometerRange(2);

}

void loop()
{
  CurieIMU.readAccelerometerScaled(ax, ay, az);
  delay(10);
  Serial.print(ax);
  Serial.print(":");
  Serial.print(ay);
  Serial.println();
  Serial.flush();

  while (Serial.available())
  {
    data = Serial.read();
  }
  if (data == '1') {
    digitalWrite (13, HIGH);
    delay(5000);
  }
  if (data == '0') {
    digitalWrite (13, LOW);
  }
}

