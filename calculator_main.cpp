#include "calculator.cpp"

int main() {

	bool isProgramRunning = true;
	double num1, num2;
	string symbol;
  
  Calculator C;
  
  // Display all the Calculator Functions 
	C.displayFunctions();
  
	while(isProgramRunning == true) {
    
	  cout << "Enter the symbol in the parenthesis of the function you would like to use: ";
	  cin >> symbol;

    // Whichever symbol they choose, it will then ask the user for 1 number or 2 numbers and then use that function that relates to the symbol
		if(symbol == "+") {
			C.askForNum(num1, num2);
			C.add(num1, num2);
		}
    else if(symbol == "-") {
      C.askForNum(num1, num2);
      C.subtract(num1, num2);
    }
    else if(symbol == "*") {
      C.askForNum(num1, num2);
      C.multiply(num1, num2);
    }
    else if(symbol == "/") {
      C.askForNum(num1, num2);
      C.divide(num1, num2);
    }
    else if(symbol == "?") {
      C.askForNum(num1, num2);
      C.find_remainder(num1, num2);
    }
    else if(symbol == "2") {
      C.askForNum(num1);
      C.square(num1);
    }
    else if(symbol == "3") {
      C.askForNum(num1);
      C.cube(num1);
    }
    else if(symbol == "^") {
      C.askForNum(num1, num2);
      C.power(num1, num2);
    }
    else if(symbol == "!") {
      C.askForNum(num1);
      C.factorial(num1);
    }
    else if(symbol == "%") {
      C.askForNum(num1, num2);
      C.percentage(num1, num2);
    }
    else if(symbol == "exit") { // if the user writes 'exit' as their symbol, it will make the while loop end and stop the calculator program
      isProgramRunning = false;
    }
    else {
      cout << "ERROR: Symbol not found.\n"; // If it's not on the list of function symbols, then it will say it's not a valid symbol and ask for another one
    }
    
	}
	
	return 0;
}
