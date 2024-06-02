// C++ code
//For loop:Dividisble by 7 and counting totle numbers
/* for(starting;conditions;increment/decrement)
*/
void setup()
{
 Serial.begin(9600);
 int i;
 int count=0;//declear a count varriable to count the total numbers
  for( i=100;i<=500;i++){
    if(i%7==0){
   Serial.println(i);count++;/*the count will begin after it pass the 7 divisible issue,for
                              continious counting ++ is used*/
     }
  }
 Serial.println("Total numbers are divisible by 7 are: ");Serial.print(count);
}

void loop()
{
 
}
