#include "Talon.h"

double turnSensitivity = 1.3;
Talon leftMotor(11);
Talon rightMotor(10);
int pinLeft = 0;
int pinRight = 0;

void setup() {
  Serial.begin(9600);
  leftMotor.begin();
  rightMotor.begin();
}

void loop() {
  if(Serial) {
    leftMotor.set(getLeftJoystick());
    rightMotor.set(getRightJoystick());
  }else{
    disable();
  }
}
