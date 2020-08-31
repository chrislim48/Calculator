#include <iostream>
#include "calculator.h"
using namespace std;

// Constructor that Initializes the variables
Calculator::Calculator() {
	num1 = 0;
	num2 = 0;
	total_amount = 0;
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
	cout << "Square Root (R)" << endl;
	cout << "Factorial (!)" << endl;
  	cout << "Percentage (%)" << endl;
  	cout << "Exit program (exit)" << endl;
  	cout << "-------------------------" << endl;
}

void Calculator::askForOneNum(double& n1) {
	cout << "Enter number: ";
	cin >> n1;
}

void Calculator::askForTwoNum(double& n1, double& n2) {
  	cout << "Enter first number: ";
	cin >> n1;
  
  	cout << "Enter second number: ";
	cin >> n2;
}

void Calculator::add(double n1, double n2, double& total) {
	total = n1 + n2;
  	cout << n1 << " + " << n2 << " = " << total << endl;
}

void Calculator::subtract(double n1, double n2, double& total) {
	total = n1 - n2;
  	cout << n1 << " - " << n2 << " = " << total << endl;
}

void Calculator::multiply(double n1, double n2, double& total) {
	total = n1 * n2;
	cout << n1 << " * " << n2 << " = " << total << endl;
}

void Calculator::divide(double n1, double n2, double& total) {
 	if(n2 != 0) {
 		total = n1 / n2;
 		cout << n1 << " / " << n2 << " = " << total << endl;
 	}
	else {
		cout << "ERROR: Can't divide by zero!\n";
	}
}

void Calculator::find_remainder(int n1, int n2, double& total) {
	total = n1 % n2;
	cout << "The remainder is " << total << endl;
}