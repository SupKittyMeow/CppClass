#include <iostream>
#include <string>
using namespace std;

class Car {
private:
  string make;
  string model;
  int year;
  string color;

public:
  Car(string m, string mo, int y, string c) {
    make = m;
    model = mo;
    year = y;
    color = c;
  }
  string toString() {
    return "My car is a " + color + " " + to_string(year) + " " + make + " " +
           model;
  }

  void setMake(string setMake) { make = setMake; }
  void setModel(string setModel) { model = setModel; }
  void setYear(int setYear) { year = setYear; }
  void setColor(string setColor) { color = setColor; }

  string getMake() { return make; }
  string getModel() { return model; }
  int getYear() { return year; }
  string getColor() { return color; }
};

int main() {
  Car car = Car("ford", "americianinaian", 2027, "neon green");
  cout << car.toString();

  cout << car.getMake();
}