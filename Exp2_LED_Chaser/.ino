void setup()
{for(int i=10;i<14;i++)
  pinMode(i, OUTPUT);
}

void loop()
{
   for(int i=10;i<14;i++)
  {digitalWrite(i, HIGH);
   if(i==13)
   {digitalWrite(10, HIGH);
   }
   else
   digitalWrite(i+1, HIGH);
   delay(1000); 
   digitalWrite(i, LOW);
  }
  
}
