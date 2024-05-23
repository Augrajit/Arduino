// C++ code
//Taking an input
void setup()
{
 Serial.begin(9600);
  
}

void loop()
{
 int a=Serial.parseInt();
 Serial.println(a);
}