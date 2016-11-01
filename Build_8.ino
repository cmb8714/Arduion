int sensorPin = A0;    // select the input pin for the potentiometer
int ledPins[ ] = {0,1,2,3,4,5,6,7};      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor


void setup() {
for(int i = 6; i < 14; i++){         //this is a loop and will repeat eight times
      pinMode(ledPins[i], OUTPUT); //we use this to set each LED pin to output
  }  //the code this replaces is below
  Serial.begin(9600);
} 



void loop() {
int delayTime = 100;
  sensorValue = analogRead(sensorPin);    // read the value from the sensor
  Serial.println(sensorValue);
/*
for(int i = 6; i < 14; i++){         //this is a loop and will repeat eight times
      digitalWrite(ledPins[i], HIGH); //we use this to set each LED pin to output
      delay(delayTime);
  }  
  
*/


if(analogRead(sensorPin) > 125) {
  digitalWrite(ledPins[0], HIGH);
   Serial.println(13);
}
  else{
    digitalWrite(ledPins[0], LOW); 
    }


  

if(analogRead(sensorPin) > 250) {
  digitalWrite(ledPins[1], HIGH);
   // Serial.println("250");
}
  else{
    digitalWrite(ledPins[1], LOW); 
    }



if(analogRead(sensorPin) > 375) {
  digitalWrite(ledPins[2], HIGH);
  //  Serial.println("375");
}
  else{
    digitalWrite(ledPins[2], LOW); 
    }

    

if(analogRead(sensorPin) > 500) {
  digitalWrite(ledPins[3], HIGH);
   // Serial.println("500");
}
  else{
    digitalWrite(ledPins[3], LOW); 
    }

    

if(analogRead(sensorPin) > 625) {
  digitalWrite(ledPins[4], HIGH);
  //  Serial.println("625");
}
  else{
    digitalWrite(ledPins[4], LOW); 
    }

    

if(analogRead(sensorPin) > 750) {
  digitalWrite(ledPins[5], HIGH);
  //  Serial.println("750");
}
  else{
    digitalWrite(ledPins[5], LOW); 
    }

    

if(analogRead(sensorPin) > 875) {
  digitalWrite(ledPins[6], HIGH);
  //  Serial.println("875");
}
  else{
    digitalWrite(ledPins[6], LOW); 
    }

    

if(analogRead(sensorPin) > 1000) {
  digitalWrite(ledPins[7], HIGH);
    //Serial.println("1000");
}
  else{
    digitalWrite(ledPins[7], LOW); 
    }


}
                       

