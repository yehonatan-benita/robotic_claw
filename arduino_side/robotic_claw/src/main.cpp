#include <Arduino.h>
#include "claw.hpp"

#define BAUDRATE 9600
#define SERVO_PWM_PIN 9
// put function declarations here:
Claw claw;

void setup() {
  Serial.begin(BAUDRATE);
  Servo claw_servo = Servo();
  claw_servo.attach(SERVO_PWM_PIN);
  claw = Claw(claw_servo);
}

void loop() {
  String message = Serial.readString(); 
  if(message == "1"){
    claw.open();
  }
  else if(message == "0"){
    claw.close();
  }
}

// put function definitions here:
