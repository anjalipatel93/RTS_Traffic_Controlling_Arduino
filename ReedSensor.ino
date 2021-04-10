int counter = 0;
float reading = 0;

void setup() {
  // put your setup code here, to run once:
 pinMode(A0,INPUT_PULLUP);
 pinMode(13,OUTPUT);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
reading = digitalRead(2);
  Serial.println(reading);

if (digitalRead(2) == HIGH){
  digitalWrite(13,HIGH);
  counter = counter+1;
  Serial.print("counter:");
  Serial.println(counter);
  delay(500);
}
else if(digitalRead(2) == LOW) {
  digitalWrite(13,LOW);
  
  delay(100);
}
}
