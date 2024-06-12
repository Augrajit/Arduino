// C++ code
//
 int temp_pin=A0;
 int buzzer=7;

void setup()
{
  Serial.begin(9600);
  pinMode(7,OUTPUT);
  
}

void loop()
{
  int temperature=temp();
  Serial.println(temperature);
  if(temperature<=0 || temperature>=100){ //OR=||
  digitalWrite(buzzer,HIGH);
  Serial.println("Buzzer is on ");
  }
  else{
  digitalWrite(buzzer,LOW);
  }
}

int temp(){
  int temperature=analogRead(temp_pin);
  return map(temperature,20,358,-40,125);
 
}