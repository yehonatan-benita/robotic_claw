#ifndef CLAW
#define CLAW

#include <Servo.h>

#define OPEN_ANGLE_DEG 90
#define CLOSE_ANGEL_DEG 0

class Claw{
public:
    Servo servo;
    Claw();
    Claw(Servo servo);
    void open();
    void close();
};

#endif