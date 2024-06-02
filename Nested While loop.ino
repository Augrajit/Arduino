// C++ code
//Nested While loop
void setup()
{   
  Serial.begin(9600);
  while(1){
    if( Serial.read()=='k'){
   while(1)
  {
  Serial.println("Augrajit");
    if(Serial.read()=='d'){   
	 break;                   
    }
  
  }
  Serial.print("Serial broke");
                    }


        }
}

void loop()
{
                               
}