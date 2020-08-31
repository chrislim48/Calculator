#include "calculator.cpp"

int main() {

	bool isProgramRunning = true;
	double num1, num2, total;
	string symbol;
  
  	Calculator C;

	C.displayFunctions();

	while(isProgramRunning == true) {
    
	 	cout << "Enter the symbol in the parenthesis of the function you would like to use: ";
	 	cin >> symbol;

		if(symbol == "+") {
			C.askForNum(num1);
      		C.askForNum(num2);
			C.add(num1, num2, total);
		}
	    else if(symbol == "-") {
	      C.askForNum(num1);
	      C.askForNum(num2);
	      C.subtract(num1, num2, total);
	    }
	    else if(symbol == "exit") {
	      isProgramRunning = false;
	    }
	    else {
	      cout << "ERROR: Symbol not found.\n";
	    }
    
	}
	
	return 0;
}