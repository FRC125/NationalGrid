long getRightJoystick(){
  long value = map(pulseIn(pinRight, HIGH), 900, 1650, -255, 255);
  if(value < -255 || value > 255){
    value = 0;
  }
  return deadband(value, 50, 0);
}

long getLeftJoystick(){
  long value = map(pulseIn(pinLeft, HIGH), 900, 1650, -255, 255);
  if(value < -255 || value > 255){
    value = 0;
  }
  return deadband(value, 50, 0);
}

int getShoot() {
  return pulseIn(pinShoot, HIGH);
}
