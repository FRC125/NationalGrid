#include <Servo.h>
#include <Encoder.h>

double turnSensitivity = 0.25;
Servo leftMotor;
Servo rightMotor;
Servo barrelMotor;
Servo linkageMotor;
int pinLeft = 12;
int pinRight = 13;
int pinShoot = 4;
int pinRotate = 3;
int pinLinkageSensor = 6;
int solenoidPlunge = 8;
int solenoidFill = 7;
int solenoidFire = 5;

void setup() {
  Serial.begin(9600);
  leftMotor.attach(10);
  rightMotor.attach(9);
  linkageMotor.attach(11);
  pinMode(pinLeft, INPUT);
  pinMode(pinRight, INPUT);
  pinMode(pinLinkageSensor, INPUT);
  pinMode(pinRotate, INPUT);
  pinMode(pinShoot, INPUT);
  pinMode(solenoidPlunge, OUTPUT);
  pinMode(solenoidFill, OUTPUT);
  pinMode(solenoidFire, OUTPUT);
}

void loop() {
  if(!disconnected()) {
    driveCheesy(getRightJoystick(), getLeftJoystick());
  }
//  if(!disconnected()) {
//    if(getLinkageRaise() == 0) {
//      stopLinkage();
//    }else if(getLinkageRaise() == 1) {
//      raiseLinkage();
//    }else if(getLinkageRaise() == -1) {
//      lowerLinkage();
//    }else{
//      stopLinkage();
//    }
//  }
  if(getShoot() && !disconnected()) {
    fireShirt();
  } else {
    cancelShot();
  }
  Serial.print("rotation spin");
  Serial.println(getLinkageRaise());
}
