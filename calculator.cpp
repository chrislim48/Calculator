#include <iostream>
#include "calculator.h"
using namespace std;

// Constructor that Initializes the variables
Calculator::Calculator() {
  num1 = 0;
  num2 = 0;
}

// Deconstructor telling the user that it is exiting the program
Calculator::~Calculator() {
	cout << "Exiting Calculator Program.\n";
}

void Calculator::displayFunctions() {
	cout << "-------------------------" << endl;
	cout << "Calculator Math Functions" << endl;
	cout << "-------------------------" << endl;
	cout << "Add (+)" << endl;
	cout << "Subtract (-)" << endl;
	cout << "Multiply (*)" << endl;
	cout << "Divide (/)" << endl;
	cout << "Remainder (?)" << endl;
	cout << "Square (2)" << endl;
	cout << "Cube (3)" << endl;
	cout << "Power (^)" << endl;
	cout << "Factorial (!)" << endl;
	cout << "Percentage (%)" << endl;
	cout << "Exit program (exit)" << endl;
	cout << "-------------------------" << endl;
}

void Calculator::askForNum(double& n1) {
	cout << "Enter number: ";
  if(n1 / 1 == n1)
  	cin >> n1;
  else
  	cout << "ERROR: Not a valid number.\n";
}

void Calculator::askForNum(double& n1, double& n2) {
  cout << "Enter first number: ";
  if(n1 / 1 == n1)
  	cin >> n1;
  else
    cout << "ERROR: Not a valid number.\n";
  
  cout << "Enter second number: ";
  if(n2 / 1 == n2)
  	cin >> n2;
  else
    cout << "ERROR: Not a valid number.\n";
}

void Calculator::add(double n1, double n2) {
  double total = n1 + n2;
  cout << n1 << " + " << n2 << " = " << total << endl;
}

void Calculator::subtract(double n1, double n2) {
	double total = n1 - n2;
  cout << n1 << " - " << n2 << " = " << total << endl;
}

void Calculator::multiply(double n1, double n2) {
  double total = n1 * n2;
  cout << n1 << " * " << n2 << " = " << total << endl;
}

void Calculator::divide(double n1, double n2) {
  if(n2 != 0) {
    double total = n1 / n2;
    cout << n1 << " / " << n2 << " = " << total << endl;
  }
  else {
    cout << "ERROR: Can't divide by zero!\n";
  }
}

void Calculator::find_remainder(int n1, int n2) {
  double total = n1 % n2;
  cout << "The remainder is " << total << endl;
}

void Calculator::square(double n1) {
  double total = n1 * n1;
  cout << n1 << " * " << n1 << " = " << total << endl;;
}

void Calculator::cube(double n1) {
  double total = n1 * n1 * n1;
  cout << n1 << " cubed is " << total << endl;
}

void Calculator::power(double n1, double n2) {
  double total = 1;
  for(int i = 0; i < n2; i++) {
    total *= n1;
  }
  cout << n1 << " to the power of " << n2 << " = " << total << endl;
}

void Calculator::factorial(double n1) {
  double total = 1;
  if(n1 < 0) {
    cout << "ERROR: Can not use factorial on negative numbers." << endl;
  }
  else if(n1 == 0) {
    cout << "0! = 1" << endl;
  }
  else {
    for(int i = 1; i < n1+1; i++) {
      total *= i;
    }
    cout << n1 << "! = " << total << endl;
  }
}

void Calculator::percentage(double n1, double n2) {
	double total = (n1 / n2) * 100;
	cout << n1 << " is " << total << "% of " << n2 << endl;
}