long getLeftJoystick() {
  return map(deadband(pulseIn(pinLeft, HIGH), 50, 1430), 1010, 1850, -255, 255);
}

long getRightJoystick() {
  return map(deadband(pulseIn(pinRight, HIGH), 50, 1430), 1010, 1850, -255, 255);
}
