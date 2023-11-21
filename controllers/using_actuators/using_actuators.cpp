#include <webots/Robot.hpp>
#include <webots/Motor.hpp>
#include <cmath>

#define TIME_STEP 32

using namespace webots;

int main() {

  Robot *robot = new Robot();
  Motor *motor = robot->getMotor("left wheel motor");

  const double F = 2.0;   // frequency 2 Hz
  double t = 0.0;         // elapsed simulation time

  while (robot->step(TIME_STEP) != -1) {
    const double position = sin(t * 2.0 * M_PI * F);
    motor->setPosition(position);
    t += (double)TIME_STEP / 1000.0;
  }

  delete robot;
  return 0;
}