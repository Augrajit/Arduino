// C++ code
//Force sensor
int sensor=A0;
int red=13, blue=12, green=11 ;

void setup()
{
  Serial.print(9600);
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
  
  
  
}

void loop()
{
  int force = analogRead(sensor);
  Serial.print(force);
  if(force>=0 && force <=150){
  Green();
  }
  if(force>=151 && force <=300){
  Yellow();
  }
  if(force>301){
  Red();
  }
}

void Red(){
 digitalWrite(red,HIGH);
 digitalWrite(blue,LOW);
 digitalWrite(green,LOW);
}

void Yellow(){
 digitalWrite(red,HIGH);
 digitalWrite(blue,LOW);
 digitalWrite(green,HIGH);
}

void Green(){
 digitalWrite(red,LOW);
 digitalWrite(blue,LOW);
 digitalWrite(green,HIGH);
}













