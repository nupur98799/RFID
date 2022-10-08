char known_tag[12] = {"270012B370F6"};
char input[12];
int count = 0;
unsigned char i;
void setup()
{
  pinMode(2,OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(3,1);
  if(Serial.available()>0)  
  {
    

input[count] = Serial.read();
count++;
delay(5);
if(count == 12)
{
count =0;
Serial.print(input);

for(i=6;i<12;i++)
{
if(known_tag[i] == input[i])
  {

  count=0;
    Serial.println("ok"); 
    digitalWrite(2,HIGH);
digitalWrite(3,LOW);
delay(1000);
digitalWrite(2,LOW);
}
else
{
 digitalWrite(4,HIGH);
delay(500);
digitalWrite(4,LOW);
}  
}  
  


  }
  }
}

  

 
