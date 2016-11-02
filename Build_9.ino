
//PhotoResistor Pin
int lightPin = 0; 
//LED Pin
int ledPin = 9;   

#include <Servo.h>

Servo myservo;  

int potpin = 0;  
int val;    

                  
void setup()
{
  pinMode(ledPin, OUTPUT); 
  myservo.attach(9);
}
 
void loop()
{
 int lightLevel = analogRead(lightPin); 
 lightLevel = map(lightLevel, 0, 900, 0, 255);
 lightLevel = constrain(lightLevel, 0, 255);
                                           
 analogWrite(ledPin, lightLevel);  


  val = analogRead(potpin);           
  val = map(val, 0, 1023, 0, 179);    
  myservo.write(val);                  
  delay(15);   
}
