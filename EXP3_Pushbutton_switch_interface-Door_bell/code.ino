void setup()
{
  pinMode(13, OUTPUT);
  pinMode(10, INPUT);
}


void loop()
{
  
  if(digitalRead(10)==1)
  {
    digitalWrite(13, HIGH);} else{digitalWrite(13, LOW);
}
  }
