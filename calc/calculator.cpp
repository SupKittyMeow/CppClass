#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

double add(double num1, double num2) { return num1 + num2; }

double subtract(double num1, double num2) { return num1 - num2; }

double divide(double num1, double num2) { return num1 / num2; }

double multiply(double num1, double num2) { return num1 * num2; }

int notMain() {
  double firstNum;
  double secondNum;
  string operation;

  cout << "Enter a number" << endl;
  cin >> firstNum;

  cout << "Enter a second number" << endl;
  cin >> secondNum;

  cout << "Enter operation" << endl;
  cin >> operation;

  double answer;

  if (operation == "add") {
    answer = add(firstNum, secondNum);
  } else if (operation == "subtract") {
    answer = subtract(firstNum, secondNum);
  } else if (operation == "divide") {
    answer = divide(firstNum, secondNum);
  } else if (operation == "multiply") {
    answer = multiply(firstNum, secondNum);
  } else {
    cout << "Invalid operation";
    return 1;
  }

  cout << answer;
  return 0;
}