
 #include <Servo.h> 

Servo myservo;
int pos = 0;
int x =900;


int ledPin =  2;  
void setup()   {                
  pinMode(ledPin, OUTPUT); 
  pinMode(12, OUTPUT);  
  pinMode(13, INPUT);  
  digitalWrite(12, HIGH);
  myservo.attach(7);
}
void loop()                     
{
  digitalWrite(ledPin, HIGH);   
  delay(x);  
  if(digitalRead(13)==LOW){
    digitalWrite(12, LOW);
    myservo.write(5); 
  }
  
  digitalWrite(ledPin, LOW);   
  delay(x);  
  if(digitalRead(13)==HIGH){
    digitalWrite(12, HIGH);
    myservo.write(175); 
  }
}
