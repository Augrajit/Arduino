// C++ code
//
void setup() {
  Serial.begin(9600);  // Initialize the serial communication

  int a = 0;
  int b = 1;
  int c;
  int n = 10;  // Set the number of terms in the Fibonacci series
  int i;

  Serial.print("Fibonacci Series: ");
  Serial.print(a);  // Print the first Fibonacci number
  Serial.print(" ");
  Serial.print(b);  // Print the second Fibonacci number

  for (i = 2; i < n; i++) {  // Starting loop from 2 as first two numbers are predefined
    c = a + b;
    a = b;
    b = c;
    Serial.print(" ");
    Serial.print(c);  // Print the next Fibonacci number in the series
  }
}

void loop() {
  
}
