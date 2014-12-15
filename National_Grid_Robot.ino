#include <Servo.h>

double turnSensitivity = 0.05;
Servo leftMotor;
Servo rightMotor;
Servo barrelMotor;
int pinLeft = 12;
int pinRight = 13;
int pinShoot = 4;
int pinBarrelSensor = 5;
int solenoidPlunge = 6;
int solenoidFill = 7;
int solenoidFire = 8;

void setup() {
  Serial.begin(9600);
  leftMotor.attach(10);
  rightMotor.attach(9);
  barrelMotor.attach(11);
  pinMode(pinLeft, INPUT);
  pinMode(pinRight, INPUT);
  pinMode(pinBarrelSensor, INPUT);
  pinMode(pinShoot, INPUT);
  pinMode(solenoidPlunge, OUTPUT);
  pinMode(solenoidFill, OUTPUT);
  pinMode(solenoidFire, OUTPUT);
}

void loop() {
//  driveCheesy(getRightJoystick(), getLeftJoystick());
  fireShirt();
  delay(5000);
}
