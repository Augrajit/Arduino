// C++ code
//Moistore Sensor
int sensor=A1;
int red=13,blue=12,green=11;
void setup()
{
 
  Serial.begin(9600);
  
  pinMode(red,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop()
{
  int mosture=analogRead(sensor);
  Serial.println(mosture);
  if(mosture>=0 && mosture<=300){
  Red();
  }
  if(mosture>=301 && mosture<=600){
  Yellow();
  }
  if(mosture>601){
  Green();
  }
  
}
 
void Red(){              //Functiuons starts from here
  digitalWrite(red,HIGH);
  digitalWrite(green,LOW);
  digitalWrite(blue,LOW);
}

void Yellow(){

  digitalWrite(red,HIGH);
  digitalWrite(green,HIGH);
  digitalWrite(blue,LOW);
}

void Green(){
 digitalWrite(red,LOW);
  digitalWrite(green,HIGH);
  digitalWrite(blue,LOW);


}























