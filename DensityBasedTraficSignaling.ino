// @author= Anjali Patel and Raghuram Vadlamani

float reading = 0;
String VehicalCountEAST ;
String VehicalCountWEST ;
String VehicalCountNORTH ;
String VehicalCountSOUTH ;

int VehicalCountEAST1 =0;
int VehicalCountWEST1 =0;
int VehicalCountNORTH1 =0;
int VehicalCountSOUTH1 =0;

int e;
int w;
int n;
int s;


int Delay_EAST = 0;
int Delay_WEST = 0;
int Delay_NORTH = 0;
int Delay_SOUTH = 0;

void setup() {
  
 pinMode(A0,OUTPUT);
 pinMode(A1,INPUT);
 pinMode(13,OUTPUT);
 Serial.begin(9600);
 
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
///////////////////////////////////

  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);

////////////////////////////////////////
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);

/////////////////////////////////////////
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);

}

void loop() {


//          Serial--Request--for--Count--of--Vehicles     //
Serial.write("EAST-");
Serial.println(" ");
//          Serial--Reading--Count--of--Vehicles     //
//VehicalCountEAST = Serial.parseInt();
//Serial.println(VehicalCountEAST);
//VehicalCountEAST1  = VehicalCountEAST.toInt();
//Serial.println(VehicalCountEAST1);
delay(2000);
e = analogRead(A0);
//Serial.println("");
delay(100);
if(e >= 500 )
{
 Serial.println("Vehical Count More than 10 in East Direction");
 Delay_EAST = 10000;
}
else 
{
 Serial.println("Vehical Count Less than 10 in East Direction");  
 Delay_EAST = 1000;
}
  West_Red_high();
  North_Red_high();
  South_Red_high();
  East_Red_low();
  East_Yello_high();
  delay(1000);
  East_Green_high();
  East_Yellow_low();
  delay(Delay_EAST);
  East_Green_low();
  East_Yello_high();
  delay(1000);
  East_Red_high();
  East_Yellow_low();
  delay(1000);
  




//////////////////////////////////////////////////////////////////////////////////////

//          Serial--Request--for--Count--of--Vehicles     //
Serial.write("WEST-");
Serial.println(" ");
//Serial--Reading--Count--of--Vehicles     //
//VehicalCountWEST = Serial.parseInt();
//Serial.println(VehicalCountWEST);
//VehicalCountWEST1  = VehicalCountWEST.toInt();
//Serial.println(VehicalCountWEST1);
delay(2000);
w = analogRead(A1);
//Serial.println(w);
delay(100);
if(w >= 500 )
{
  Serial.println("Vehical Count More than 10 in West Direction");
  Delay_WEST = 10000;
}
else
{
 Serial.println("Vehical Count Less than 10 in West Direction");
 Delay_WEST = 1000;
}
  East_Red_high();
  North_Red_high();
  South_Red_high();
  West_Red_low();
  West_Yello_high();
  delay(1000);
  West_Green_high();
  West_Yellow_low();
  delay(Delay_WEST);
  West_Green_low();
  West_Yello_high();
  delay(1000);
  West_Red_high();
  West_Yellow_low();
  delay(1000);
  
////////////////////////////////////////////////////////////////////////
//          Serial--Request--for--Count--of--Vehicles     //
//Serial.write("NORTH");
Serial.write("NORTH");
Serial.println(" ");
//          Serial--Reading--Count--of--Vehicles     //
//VehicalCountNORTH = Serial.read();
//Serial.println(VehicalCountNORTH);
//VehicalCountNORTH1  = VehicalCountNORTH.toInt();
//Serial.println(VehicalCountNORTH1);
delay(2000);
n = analogRead(A2);
//Serial.println(n);
delay(100);
if(n >= 500 )
{
   Serial.println("Vehical Count More than 10 in North Direction");
  Delay_NORTH = 10000;
}
else 
{
   Serial.println("Vehical Count Less than 10 in North Direction");
  Delay_NORTH = 1000;
}

  East_Red_high();
  West_Red_high();
  South_Red_high();
  North_Red_low();
  North_Yello_high();
  delay(1000);
  North_Green_high();
  North_Yellow_low();
  delay(Delay_NORTH);
  North_Green_low();
  North_Yello_high();
  delay(1000);
  North_Red_high();
  North_Yellow_low();
  delay(1000);

///////////////////////////////////////////////////////////////////////
//          Serial--Request--for--Count--of--Vehicles     //
Serial.write("SOUTH");
Serial.println(" ");
//          Serial--Reading--Count--of--Vehicles     //
//VehicalCountSOUTH = Serial.read();
//Serial.println(VehicalCountSOUTH);
//VehicalCountSOUTH1  = VehicalCountSOUTH.toInt();
//Serial.println(VehicalCountSOUTH1);
delay(2000);
s = analogRead(A3);
//Serial.println(s);
delay(100);
if(s >= 500 )
{
   Serial.println("Vehical Count More than 10 in South Direction");
  Delay_SOUTH = 10000;
}
else 
{
  Serial.println("Vehical Count Less than 10 in South Direction");
  Delay_SOUTH = 1000;
}

  East_Red_high();
  North_Red_high();
  West_Red_high();
  South_Red_low();
  South_Yello_high();
  delay(Delay_SOUTH);
  South_Green_high();
  South_Yellow_low();
  delay(Delay_SOUTH);
  South_Green_low();
  South_Yello_high();
  delay(Delay_SOUTH);
  South_Red_high();
  South_Yellow_low();
  delay(Delay_SOUTH);

  delay(1000);
}


void East_Green_low()
{
  digitalWrite(2,LOW);
}

void East_Green_high()
{
  digitalWrite(2,HIGH);
}

void East_Yellow_low()
{
  digitalWrite(3,LOW);
}

void East_Yello_high()
{
  digitalWrite(3,HIGH);
}

void East_Red_low()
{
  digitalWrite(4,LOW);
}

void East_Red_high()
{
  digitalWrite(4,HIGH);
}

//////////////////////////////////////////////////////

void West_Green_low()
{
  digitalWrite(5,LOW);
}

void West_Green_high()
{
  digitalWrite(5,HIGH);
}

void West_Yellow_low()
{
  digitalWrite(6,LOW);
}

void West_Yello_high()
{
  digitalWrite(6,HIGH);
}

void West_Red_low()
{
  digitalWrite(7,LOW);
}

void West_Red_high()
{
  digitalWrite(7,HIGH);
}


//////////////////////////////////////////////////////

void North_Green_low()
{
  digitalWrite(8,LOW);
}

void North_Green_high()
{
  digitalWrite(8,HIGH);
}

void North_Yellow_low()
{
  digitalWrite(9,LOW);
}

void North_Yello_high()
{
  digitalWrite(9,HIGH);
}

void North_Red_low()
{
  digitalWrite(10,LOW);
}

void North_Red_high()
{
  digitalWrite(10,HIGH);
}

/////////////////////////////////////////////////////

void South_Green_low()
{
  digitalWrite(11,LOW);
}

void South_Green_high()
{ 
  digitalWrite(11,HIGH);
}

void South_Yellow_low()
{
  digitalWrite(12,LOW);
}

void South_Yello_high()
{
  digitalWrite(12,HIGH);
}

void South_Red_low()
{
  digitalWrite(13,LOW);
}

void South_Red_high()
{
  digitalWrite(13,HIGH);
}
