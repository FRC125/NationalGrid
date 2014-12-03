long deadband(long value, long deadband, long center) {
  if(value < (center + deadband) && value > (center - deadband)) {
    return center;
  }else{
    return value;
  }
}
