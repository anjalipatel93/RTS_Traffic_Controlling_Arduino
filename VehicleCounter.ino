//Author- @Anjali_Patel and Raghuram Vadlamani

int counter_EAST = 0;
int counter_WEST = 0;
int counter_NORTH = 0;
int counter_SOUTH = 0;
String readtext;
int b = 0;
float reading = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
pinMode(8,OUTPUT);
pinMode(2,INPUT_PULLUP);
pinMode(3,INPUT_PULLUP);  
 pinMode(13,OUTPUT);
 Serial.begin(9600);

}

void loop() {

while(1)
{
  
  if (digitalRead(2) == HIGH){
  counter_EAST = counter_EAST+1;
  Serial.print("counter_EAST:");
  Serial.println(counter_EAST);
  delay(500);
}
  if (digitalRead(3) == HIGH){
  digitalWrite(13,HIGH);
  counter_WEST = counter_WEST+1;
  Serial.print("counter_WEST:");
  Serial.println(counter_WEST);
  delay(200);
}
  if (digitalRead(4) == HIGH){
  counter_NORTH = counter_NORTH+1;
  Serial.print("counter_NORTH:");
  Serial.println(counter_NORTH);
  delay(500);
}
 // if (digitalRead(5) == HIGH){
 // counter_NORTH = counter_NORTH+1;
 // Serial.print("counter_NORTH:");
 // Serial.println(counter_NORTH);
 // delay(500);
//}

Serial.println(readtext);
while(Serial.available()){
  //char a = Serial.readString();
  //readtext += a; 
  readtext = Serial.readString();
  //b = Serial.read();
    //Serial.println("before");
  //Serial.println(readtext);
  readtext.remove(5);
  //Serial.println("Afetr");
   Serial.println(readtext);
}
//////////////////////////////////////////////////////////////////
if (counter_EAST >= 10)
{
if(readtext == "EAST-")
  {
    digitalWrite(8,HIGH);
    counter_EAST = 0;
    delay(2000);
  }
  else
  {
    digitalWrite(8,LOW);
  }  
}
  else
  {
    digitalWrite(8,LOW);
  } 
/////////////////////////////////////////////////////////////////
if (counter_WEST >= 10)
{
 if(readtext == "WEST-")
  {
    digitalWrite(9,HIGH);
    counter_WEST = 0;
    delay(2000);
  }
  else
  {
    digitalWrite(9,LOW);
  }
}
    else
  {
    digitalWrite(9,LOW);
  }

/////////////////////////////////////////////////////////////////////////

 if (counter_NORTH >= 10)
{
    //Serial.println(counter_NORTH);
   if(readtext == "NORTH")
  {
    digitalWrite(10,HIGH);
    counter_NORTH = 0;
    delay(2000);
  }
  else
  {
    digitalWrite(10,LOW);
  }
}
  else
  {
    digitalWrite(10,LOW);
  }
/////////////////////////////////////////////////////////////////////////
 if (counter_SOUTH >= 10)
{
   if(readtext == "SOUTH")
  {
    digitalWrite(11,HIGH);
    counter_SOUTH = 0;
    delay(2000);
  }
  else
  {
    digitalWrite(11,LOW);
  }
}
  else
  {
    digitalWrite(11,LOW);
  }

readtext = "";

}
}
