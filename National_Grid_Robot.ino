#include <Servo.h>

double turnSensitivity = 0.05;
Servo leftMotor;
Servo rightMotor;
Servo barrelMotor;
Servo linkageMotor;
int pinLeft = 12;
int pinRight = 13;
int pinShoot = 4;
int pinBarrelSensor = 5;
int pinLinkageSensor = 2;
int solenoidPlunge = 7;
int solenoidFill = 6;
int solenoidFire = 8;

void setup() {
  Serial.begin(9600);
  leftMotor.attach(10);
  rightMotor.attach(9);
  barrelMotor.attach(11);
  linkageMotor.attach(3);
  pinMode(pinLeft, INPUT);
  pinMode(pinRight, INPUT);
  pinMode(pinBarrelSensor, INPUT);
  pinMode(pinLinkageSensor, INPUT);
  pinMode(pinShoot, INPUT);
  pinMode(solenoidPlunge, OUTPUT);
  pinMode(solenoidFill, OUTPUT);
  pinMode(solenoidFire, OUTPUT);
}

void loop() {
  driveCheesy(getRightJoystick(), getLeftJoystick());
  if(getShoot()) {
    fireShirt();
    delay(3000);
  }
}
