
int temperaturePin = 0;
const int ledPins[ ] = {8,9};
const int buttonPins[ ] = {3,2};
const int ledPins8 = 8;
const int ledPins9 = 9;
 int targetTemp = 80;
void setup()
{
  Serial.begin(9600);  
  pinMode(ledPins[0],OUTPUT);
  pinMode(ledPins[1],OUTPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  

}
 
void loop()                    
{
 float temperature = getVoltage(temperaturePin);  
 temperature = (((temperature - .5) * 100) * 1.8) + 32;          

 int heating = false;
 int cooling = false;

 int x = 0;
                                         
 Serial.println(temperature);                     
 Serial.println("Degrees F, CURRENT TEMP");
 Serial.println(targetTemp);
 Serial.println("Degrees F, TARGET TEMP"); 
 delay(2000);                                     

 int buttonState0 = digitalRead(12);
 int buttonState1 = digitalRead(13);
 
  if (buttonState1 == LOW) {     
    targetTemp += 5;   
    delay(100);                          
  }

  if (buttonState0 == LOW) {
    targetTemp -= 5;
    delay(100); 
  }

if (temperature < targetTemp -3) {
  cooling = true;
  heating = false;
  Serial.println("Heating");
  delay(2000);
}
 else if (targetTemp + 3 < temperature) {
  cooling = false;
  heating = true;
  Serial.println("Cooling");
  delay(2000);
 }
 else {
  cooling = false;
  heating = false;
  Serial.println("no heating or cooling");
  delay(2000);
 }
  
  if (cooling == true) {
    digitalWrite(ledPins[0], HIGH);
  }
  else {
    digitalWrite(ledPins[0], LOW);
  }

  if (heating == true) {
    digitalWrite(ledPins[1], HIGH);
  }
  else {
    digitalWrite(ledPins[1], LOW);
  }

}


float getVoltage(int pin){
 return (analogRead(pin) * .004882814); 
}
