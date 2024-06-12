// C++ code
//Control Servo motor with Flex Sensor
 #include <Servo.h> //header file for servo
 int sensor=A0;

 int servo_pin=13;
 Servo myServo;     //servo varriable
 
 
void setup()
{
 Serial.begin(9600);
 myServo.attach(servo_pin);
}

void loop()
{
  int angle_value= angle();
  myServo.write(angle_value);   //write's w is in small letter
  Serial.println(angle_value);
 
}
int angle(){
  
  int sensor_value= analogRead(A0);
  int angle=map(sensor_value,682,275,180,0);
  //Serial.println(sensor_value);
  return angle;
  
  }









