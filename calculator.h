class Calculator {
	private:
		double num1;
	 	double num2;
	 	double total_amount;
	public:
	 	Calculator();
    	~Calculator();
  		void displayFunctions();
		void askForNum(double& n1);
		void add(double n1, double n2, double& total);
		void subtract(double n1, double n2, double& total);
		void multiply(double n1, double n2, double& total);
		void divide(double n1, double n2, double& total);
		void find_remainder(double n1, double n2, double& total);
		void squared(double& total);
		void cubed(double& total);
		void power(double n1, double n2, double& total);
		void squareRoot(double& total);
		void factorial(double& total);
};