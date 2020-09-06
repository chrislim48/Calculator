class Calculator {
	private:
		double num1;
	  double num2;
	public:
		Calculator();
		~Calculator();
  	void displayFunctions();
  	void askForNum(double& n1);
  	void askForNum(double& n1, double& n2);
  	void add(double n1, double n2);
  	void subtract(double n1, double n2);
  	void multiply(double n1, double n2);
  	void divide(double n1, double n2);
  	void find_remainder(int n1, int n2);
  	void square(double n1);
  	void cube(double n1);
  	void power(double n1, double n2);
  	void factorial(double n1);
  	void percentage(double n1, double n2);
};