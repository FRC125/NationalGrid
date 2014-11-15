#include <Servo.h>

double turnSensitivity = 1.3;
Servo leftMotor;
Servo rightMotor;
int pinLeft = 12;
int pinRight = 13;

void setup() {
  Serial.begin(9600);
  leftMotor.attach(10);
  rightMotor.attach(9);
  pinMode(pinLeft, INPUT);
  pinMode(pinRight, INPUT);
}

void loop() {
  driveCheesy(getRightJoystick(), getLeftJoystick());
}
