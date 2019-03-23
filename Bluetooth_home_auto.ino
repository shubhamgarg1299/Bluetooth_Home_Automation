


//Bluetooth Home Automation
int r1=10;
int R2=11;
int r3=12;
int r4=13;
char val;
void setup() {
  // put your setup code here, to run once:
pinMode(r1,OUTPUT);
pinMode(r2,OUTPUT);
pinMode(r3,OUTPUT);
pinMode(r4,OUTPUT);
digitalWrite(r1,LOW);
digitalWrite(r2,LOW);
digitalWrite(r3,LOW);
digitalWrite(r4,LOW);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
while(Serial.available()>0){
  val=Serial.read();
  Serial.println(val);
}
if(val=='1'){
  digitalWrite(r1,HIGH);
}
else if(val=='2'){
  digitalWrite(r2,HIGH);
}
else if(val=='3'){
  digitalWrite(r3,HIGH);
}
else if(val=='4'){
  digitalWrite(r4,HIGH);
}
else if(val=='9'){
  digitalWrite(r1,HIGH);
  digitalWrite(r2,HIGH);
  digitalWrite(r3,HIGH);
  digitalWrite(r4,HIGH);
}
else if(val=='A'){
  digitalWrite(r1,LOW);
}
else if(val=='B'){
  digitalWrite(r2,LOW);
}
else if(val=='C'){
  digitalWrite(r3,LOW);
}
else if(val=='D'){
  digitalWrite(r4,LOW);
}
else if(val=='I'){
  digitalWrite(r1,LOW);
  digitalWrite(r2,LOW);
  digitalWrite(r3,LOW);
  digitalWrite(r4,LOW);
}


}
