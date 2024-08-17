#include "claw.hpp"

Claw::Claw()
{
    this->servo;
}

Claw::Claw(Servo servo)
{
    this->servo = servo;
}

void Claw::open()
{
    this->servo.write(OPEN_ANGLE_DEG);
}

void Claw::close()
{
    this->servo.write(CLOSE_ANGEL_DEG);
}
