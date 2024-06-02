// C++ code
//Lagrest among three numbers
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  int n1, n2, n3;
  n1=69;
  n2=55;
  n3=88;
  if(n1>n2 && n1>n3){
  Serial.print(n1);Serial.print("the lagrest");
  }
  if(n2>n1 && n2>n3){
  Serial.print(n2); Serial.print("the lagrest");
  }
  else{
  Serial.print(n3); Serial.print("the lagrest");

   }
  Serial.println("");
}
