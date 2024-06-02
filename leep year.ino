// C++ code
//Testing leep year
void setup()
{
 Serial.begin(9600);
}

void loop()
{
 int y=2022;
  if(y%4==0 && y%100!=0 || y%400==0){
  Serial.print(y);Serial.print("is a leep year");
  }
  else{
  Serial.print(y);Serial.print ("is not a leep year");

   }
  Serial.println("");
}
