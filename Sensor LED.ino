// C++ code
// Sensor LED
int light=11;
void setup()
{
  Serial.print(9600);//analaog pin by default input
  pinMode(light,OUTPUT);
  
}

void loop()
{
  int resistance=analogRead(A1);//taking value from analog pin
  Serial.print(resistance);
  if (resistance>400){
  digitalWrite(light,HIGH);
            
    }
  
  else{
    digitalWrite(light,LOW);
  }
  
}