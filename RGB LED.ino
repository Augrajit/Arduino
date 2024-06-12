// C++ code
//RGB Light

int red=13, blue=12, green=11;
void setup()
{
   pinMode(red ,OUTPUT);
   pinMode(blue ,OUTPUT);
   pinMode(green ,OUTPUT);
}

void loop()
{
 rgbblink();//eikhane je functiuon proyojon oi function dite hobe
}
void rgbblink(){
  digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(13,LOW);
  delay(500);
  digitalWrite(12,HIGH);   
  delay(500);
  digitalWrite(12,LOW);
  delay(500);
  digitalWrite(11,HIGH);
  delay(500);
  digitalWrite(11,LOW);
   delay(500);
}


  void yellowblink(){
  digitalWrite(red,HIGH);
  digitalWrite(green,HIGH);
  delay(1000);
  digitalWrite(red,LOW);
  digitalWrite(green,LOW);
  delay(1000);
  }   
    
    
    
    
    
    
    
    
    
    
