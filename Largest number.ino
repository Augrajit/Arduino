// C++ code
/*if(conditions 1,2,3......){
    .......codes
   }
*/
 //Identifing the largest number 
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  if(Serial.available() > 0){ 
   int number1=15;
   int number2=10;
    if(number1>number2){
    
     Serial.print (number1);
     Serial.print("is the largest");
    }
    else{
     Serial.print(number2);

  }
     Serial.println("");
  }
 
  
}