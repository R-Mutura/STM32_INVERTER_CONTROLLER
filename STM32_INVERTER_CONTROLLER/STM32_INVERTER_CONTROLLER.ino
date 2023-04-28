#include <Wire.h>
#include <Adafruit_MCP4725.h>
#include <Servo.h>

Servo myservo;
Adafruit_MCP4725 dac;
#define servo_pin PA3
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Starting!");
  
  dac.begin(0x62);
  
   Serial.println("analog IC initialized");
   myservo.attach(servo_pin);//SERVO PIN INITIALIZED
   
   
   //TO RUN THE ITEMS NOW IN A SINGLE ITERATION
   //voltage level from 0-5v -- send an integer value t the analog ic 0-4095 for the range
   //we eill send a 2.5v = 2047 integer value
      dac.setVoltage(2047, true); //send and write the data to eeprom(true)
      myservo.write(180);//full turn=> for 270deg based motor will go t0 270deg with this instruction
    
}


void loop() {
  // put your main code here, to run repeatedly:
//
Serial.println("in the main loop");
delay(1000)
}
