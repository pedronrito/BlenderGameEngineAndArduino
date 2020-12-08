int buttonState = 0;

void setup()
{
  Serial.begin(9600);
  while (!Serial);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  buttonState = digitalRead(2);
  if (buttonState == HIGH) {
    Serial.print('u'); //upX
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
  buttonState = digitalRead(3);
  if (buttonState == HIGH) {
    Serial.print('d'); //upX
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }


  delay(10); // pode.se ignorar
  Serial.flush();
}
