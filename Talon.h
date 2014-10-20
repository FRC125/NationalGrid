#include "Arduino.h"

class Talon {
  public:
    Talon(int pin);
    void begin();
    void set(double output);
    double get();
  private:
    int _pin;
    double _output;
};

Talon::Talon(int pin) {
  _pin = pin;
}

void Talon::begin() {
  pinMode(_pin, OUTPUT);
}

void Talon::set(double output) {
  analogWrite(_pin, map(output, -1, 1, 0, 255));
  _output = output;
}

double Talon::get() {
  return _output;
}
