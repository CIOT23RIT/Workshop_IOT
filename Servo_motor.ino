#include <Servo.h>  
  
Servo myservo;  
// It creates a servo object, which is used to control the servo  
  
int potentioPIN = A0;  // specified analog pin used to connect the potentiometer  
int value;    // value initialized to the variable to read the value from the analog pin  
  
void setup()   
{  
  myservo.attach(9);  // servo connected to pin 9 of the Arduino board to the servo object  
}  
  
void loop()   
{  
  value = analogRead(potentioPIN);              
  // reads the value of the potentiometer (value between 0 and 1023)  
  value = map(value, 0, 1023, 0, 180);       
  // scale it to use it with the servo (value between 0 and 180)  
  myservo.write(value);   
  delay(1000); // it will wait for 1 second for the   
  // It will set the position of the motor according to the scaled value  
  value = map(value, 1023, 0, 180, 0);  
  // reads the value of the potentiometer (value between 1023 and 0)  
   myservo.write(value);  
  // scale it to use it with the servo (value between 180 and 0)  
  // the motor will rotate in reverse direction  
  delay(1000);                             
  // delay time in milliseconds  
  //after 1500 millisecond it will again rotate from 0 to 180 degree  
}  