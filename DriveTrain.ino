void driveLR(double left, double right) {
  leftMotor.set(left);
  rightMotor.set(right);
}

void driveCheesy(double throttle, double wheel) {
  double angularPower;
  double rightPower;
  double leftPower;
  angularPower = abs(throttle) * wheel * turnSensitivity;
  rightPower = throttle;
  leftPower = throttle;
  leftPower += angularPower;
  rightPower -= angularPower;
  driveLR(leftPower, rightPower);
}

void disable() {
  leftMotor.set(0);
  rightMotor.set(0); 
}
