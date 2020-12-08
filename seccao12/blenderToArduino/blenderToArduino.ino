int data;

void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  digitalWrite (13, LOW);
}

void loop()
{
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
