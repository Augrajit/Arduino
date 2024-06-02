// C++ code
//While loop:finding even number
void setup()
{
  Serial.begin(9600);
 int i=1;
  while(i<=100){
    if(i%2==0){
   Serial.println(i);
    }
     i++;

    }
}

void loop()
{

   
}