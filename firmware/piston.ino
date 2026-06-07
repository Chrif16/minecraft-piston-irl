#include <Stepper.h>

Stepper motor(2048, 9, 10, 11, 12);

void setup() {
  motor.setSpeed(5);
}

void loop() {
  motor.step(2048);
  delay(5000);
  motor.step(-2048);
  delay(5000);
}
