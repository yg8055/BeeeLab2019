void setup() {
  // put your setup code here, to run once:
pinMode(9,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:


  digitalWrite(9,LOW);
  delayMicroseconds(3);
  digitalWrite(9,HIGH);
  delayMicroseconds(10);
  digitalWrite(9,LOW);
  delayMicroseconds(3);

long t=pulseIn(10,HIGH);

float d=0.017*t;

Serial.print(d);
Serial.write("\n");
delay(300);
if(d<20)
{
 
  for(int j=0;j<256;j++)
  {analogWrite(11,j);
  delay(2);
  }
  digitalWrite(11,LOW);
  delay(50);
 
}
else
digitalWrite(11,LOW);
}
