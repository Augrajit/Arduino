// C++ code
//Array
void setup()
{
  
   Serial.begin(9600);
  
    int array[5]={1,2,3,4,5};
     for(int i=0;i<5;i++){   //int for varriable declaration
   
    Serial.print(array[i]);
     }
       Serial.print (" ");
  
     for(int i=100;i<105;i++ ){
     
       array [i-100]=i;//array [100-100]=100=> array[0]=100
         
         Serial.print(array[i-100]);Serial.println(" ");
     
     
     }

  
    

 }

void loop()
{
  
}