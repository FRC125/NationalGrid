void fireShirt() {
//  while(digitalRead(pinBarrelSensor) != LOW) {
//    barrelMotor.write(map(255, -255, 255, 0, 180));
//  }
  fireSolenoid(solenoidPlunge);
  delay(100);
  fireSolenoid(solenoidFill);
  delay(3000);
  retractSolenoid(solenoidFill);
  delay(100);
  fireSolenoid(solenoidFire);
  delay(500);
  retractSolenoid(solenoidFire);
  delay(100);
  retractSolenoid(solenoidPlunge);
}

void spinBarrel(double rate) {
  barrelMotor.write(map(rate, -255, 255, 0, 180));
}

void raiseLinkage() {
  
}

void lowerLinkage() {
  
}
