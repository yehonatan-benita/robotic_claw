#include <Arduino.h>
#include "claw.hpp"

#define SERVO_PWM_PIN 9
// put function declarations here:
Claw claw;

void setup() {
  Servo claw_servo = Servo();
  claw_servo.attach(SERVO_PWM_PIN);
  claw = Claw(claw_servo);
}

void loop() {
  claw.close();
  delay(1000);
  claw.open();
  delay(1000);
}

// put function definitions here:
