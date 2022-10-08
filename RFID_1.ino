
int led=13;
int count=0;
void setup()
{
  Serial.begin(9600);//serial monitor
 pinMode(led,OUTPUT);
}

void loop()
{
  if(Serial.available())
  {
digitalWrite(led,HIGH);
delay(500);
  {
      
      count=0; 
      
      {
          char item=Serial.read();
          Serial.print(item);
          count++;
          delay(5);
      
      }
    
        //Serial.println();
       // Serial.print("Tag Length:  ");
//       Serial.print(count);
//        Serial.print("   Bytes  ");
    

  }
  }
else
{
  digitalWrite(led,LOW);
}
}
  
