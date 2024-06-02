// C++ code
//Function


void setup()
{
  Serial.begin(9600);
  int a= largest_number(2,4,7);
  Serial.println(a);
  
}

void loop()
{  
}

int largest_number (int n1,int n2, int n3){
  
 
  if(n1>n2 && n1>n3){
  return n1;
  }
  if(n2>n1 && n2>n3){
  return n2;
  }
  if (n3>n2 && n3>n1){
  return n3;

   
 



 }


}

    
/*return type function_type(peramitars..............){
  .....function code
  
  
   return  
   }
   
   
 */