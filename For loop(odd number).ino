// C++ code
//For loop:odd number
/* for(starting;conditions;increment/decrement)
*/
void setup()
{
 Serial.begin(9600);
 int i;
  for(int i=1;i<=100;i++){
    if(i%2!=0){
   Serial.println(i);
    }
  }
 
}

void loop()
{
 
}
