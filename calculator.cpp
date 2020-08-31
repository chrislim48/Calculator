#include <iostream>
#include "calculator.h"
using namespace std;

Calculator::Calculator() {
	num1 = 0;
	num2 = 0;
}

Calculator::Calculator(double n1, double n2) {
	num1 = n1;
	num2 = n2;
}