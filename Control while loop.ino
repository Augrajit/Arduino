// C++ code
//Control While loop
void setup()
{   
  Serial.begin(9600);
   while(1)
  {
  Serial.println("Augrajit");
    if(Serial.read()=='d'){   //Serial.read() to take info from serial computer
	 break;                   //break for control the loop
    }
  
  }
  Serial.print("Serial broke");
}

void loop()
{
                                //avoid loop in order to prevent over printing
}