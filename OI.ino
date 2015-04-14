const int numReadings = 2;
int rightReadings[numReadings];
int leftReadings[numReadings];
int index = 0;
int rightTotal;
int leftTotal;

long getRightJoystick(){
  rightTotal -= rightReadings[index];
  rightReadings[index] = map(pulseIn(pinRight, HIGH), 900, 1650, -255, 255);
  rightTotal += rightReadings[index];
  index++;
  if(index >= numReadings){
    index = 0;
  }
  return -deadband(rightTotal/numReadings, 50, 0);
}

long getLeftJoystick(){
  leftTotal -= leftReadings[index];
  leftReadings[index] = map(pulseIn(pinLeft, HIGH), 900, 1650, -255, 255);
  leftTotal += leftReadings[index];
  return deadband(leftTotal/numReadings, 50, 0);
}

int getLinkageRaise(){
  if(pulseIn(pinRotate, HIGH) > 1225 && pulseIn(pinRotate, HIGH) < 1275) {
    return 0;
  }else if(pulseIn(pinRotate, HIGH) < 1225) {
    return -1;
  }else if(pulseIn(pinRotate, HIGH) > 1275) {
    return 1;
  }
}

boolean disconnected() {
  long value = map(pulseIn(pinLeft, HIGH), 900, 1650, -255, 255);
  return (value < -270 || value > 270);
}

boolean getShoot() {
  return pulseIn(pinShoot, HIGH) > 1000;
}
