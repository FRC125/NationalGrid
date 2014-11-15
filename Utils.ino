unsigned long deadband(unsigned long value, unsigned long deadband, unsigned long center) {
  if(value < (center + deadband) && value > (center - deadband)) {
    return center;
  }else{
    return value;
  }
}
