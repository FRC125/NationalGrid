void fireShirt() {
  //do {
    //spinBarrel(50);
  //} while(-1*barrelEncoder.read() % 160 != 0);
  
  fireSolenoid(solenoidPlunge);
  delay(100);
  fireSolenoid(solenoidFill);
  delay(7500);
  retractSolenoid(solenoidFill);
  delay(100);
  fireSolenoid(solenoidFire);
  delay(1000);
  retractSolenoid(solenoidFire);
  delay(1000);
}

void cancelShot() {
  barrelMotor.write(map(0, -255, 255, 0, 180));
  retractSolenoid(solenoidPlunge);
  retractSolenoid(solenoidFire);
  retractSolenoid(solenoidFill);
}

void spinBarrel(double ticks) {
  //double target = barrelEncoder.read() + ticks;
  //double rate = (target - barrelEncoder.read())/rate * 255 * 0.5;
  //barrelMotor.write(map(rate, -255, 255, 0, 180));
}

void raiseLinkage() {
  linkageMotor.write(map(30, -255, 255, 0, 180));
}

void lowerLinkage() {
  linkageMotor.write(map(-30, -255, 255, 0, 180));
}

void stopLinkage() {
  linkageMotor.write(map(0, -255, 255, 0, 180));
}
