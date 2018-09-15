#include <SoftwareSerial.h>
int tp,ep;

float duration,distance;
void setup() 
  // put your setup code here, to run once:
    tp=5;
    ep=6;
    pinMode(tp,OUTPUT);
    pinMode(ep,INPUT);
    Serial.begin(9600);
    }

void loop() {
 
  // put your main code here, to run repeatedly:
  
    digitalWrite(tp,LOW);
    delayMicroseconds(2);
    digitalWrite(tp,HIGH);
    delayMicroseconds(10);
    digitalWrite(tp,LOW);
    duration=pulseIn(ep,HIGH);
    distance=duration*(0.0340/2);
    if(distance>=5)
    {
    Serial.println("Distance: ");
    Serial.println(distance);
    delay(2000);
    }
    
}
