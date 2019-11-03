
void setup()
{
  Serial.begin(9600);
pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);

}

void loop()
{  
  digitalWrite(9,HIGH);
 delayMicroseconds(10);
       digitalWrite(9,LOW);
 
double t= pulseIn(10,HIGH);
 double d=0.017*t;
 Serial.print("d");
  Serial.print("\n");

}

 
