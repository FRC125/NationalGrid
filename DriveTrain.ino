void driveLR(double leftPower, double rightPower) {
//  Serial.print("Left: ");
//  Serial.print(getLeftJoystick());
//  Serial.print(" Right: ");
//  Serial.println(getRightJoystick());
  leftMotor.write(map(leftPower, -255, 255, 0, 180)+7);
  rightMotor.write(map(-rightPower, -255, 255, 0, 180)+7);
}

double angularPower;
double rightPower;
double leftPower;

void driveCheesy(double throttle, double wheel) {
  angularPower = abs(throttle) * -wheel * turnSensitivity;
  rightPower = throttle + angularPower;
  leftPower = throttle - angularPower;
  driveLR(leftPower, rightPower);
}

void disable() {
  leftMotor.write(map(0, -255, 255, 0, 180));
  rightMotor.write(map(0, -255, 255, 0, 180)); 
}
