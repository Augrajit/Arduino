// C++ code
//Array
void setup()
{
  Serial.begin(9600);
  
  int array[5]={1,2,3,4,5};

     for(int i=0;i<5;i++){  //for printing the whole array we need a for loop
      
         Serial.print (array[i]); //Print the whole array
      
    }
                
 }

void loop()
{
  
}