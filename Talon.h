#include "Arduino.h"
#include "Servo.h"

class Talon {
  public:
    Talon(int pin);
    void begin();
    void set(double output);
    double get();
  private:
    Servo _myservo;
    int _pin;
    double _output;
};

Talon::Talon(int pin) {
  _pin = pin;
}

void Talon::begin() {
  _myservo.attach(_pin);
}

void Talon::set(double output) {
  _myservo.write(map(output, -1, 1, 0, 255));
  _output = output;
}

double Talon::get() {
  return _output;
}
