#define BLYNK_PRINT Serial
#include <SPI.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>
#include <ESP8266WiFi.h>


// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).

char auth[] = "";

Servo servo;  
Servo servo1;

void setup()  
{
  Serial.begin(9600);
  Blynk.begin(auth, "", "");
  servo.attach(14);
  servo1.attach(12);
}
BLYNK_WRITE(V10)  
{
  servo.write(param.asInt());  
}
BLYNK_WRITE(V11)  
{ 
  servo1.write(param.asInt());
}  
void loop()  
{ 
  Blynk.run();
}
