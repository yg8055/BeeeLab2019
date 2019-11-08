void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

int data;

void loop()
{
  data=Serial.read();
  Serial.println(data);
  
  if(data==49)
  digitalWrite(13, HIGH);
  
  else if(data == 48)
  digitalWrite(13, LOW);
  
}
