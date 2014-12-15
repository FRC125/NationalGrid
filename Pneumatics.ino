void fireSolenoid(int pinSolenoid) {
  digitalWrite(pinSolenoid, HIGH);
}

void retractSolenoid(int pinSolenoid) {
  digitalWrite(pinSolenoid, LOW);
}
