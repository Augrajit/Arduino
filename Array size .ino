// C++ code
//Array SIZE
/* int array[]={................};
  Serial.print(sizeof (array)/ sizeof (array[0]));
*/  
void setup()
{
  
 Serial.begin(9600);
  char array[]={'w','e','d','f'};
  Serial.print(sizeof (array)/ sizeof (array[0]));//int=2byte; float=4byte; char=1byte||1byte=8bit
  
    
                                                  //sizeof is a new kind of function which is used to determine the size
  
 }

void loop()
{
  
}