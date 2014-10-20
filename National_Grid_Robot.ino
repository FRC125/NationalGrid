#include "Talon.h"

double turnSensitivity = 1.3;
Talon leftMotor(11);
Talon rightMotor(10);

void setup() {
  Serial.begin(9600);
  leftMotor.begin();
  rightMotor.begin();
}

void loop() {
  leftMotor.set(1);
  Serial.println(leftMotor.get());
}
