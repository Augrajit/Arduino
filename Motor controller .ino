// C++ code
//Motor controller
int n=11,p=10;
void setup()
{
  pinMode(n,OUTPUT);
  pinMode(p,OUTPUT);
}

void loop()
{
  analogWrite(n,0);  //0,input voltage minimum =0v
  analogWrite(p,130);//255,output voltage maximum =5v
  delay(2000);
  analogWrite(p,0);
  analogWrite(n,130);//(130/255)*5=2.549V
  delay(2000);
  
}