unsigned long getLeftJoystick() {
  return pulseIn(pinLeft, HIGH);
}

unsigned long getRightJoystick() {
  return pulseIn(pinRight, HIGH);
}
