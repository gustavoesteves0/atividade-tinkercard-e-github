int azul = 8;

void setup()
{
  pinMode(azul, OUTPUT);
}

void loop()
{
  digitalWrite(azul, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(azul, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
