class Calculator {
	private:
		double num1;
		double num2;
	public:
		Calculator();
		Calculator(double n1, double n2);
		~Calculator();
		void add(double& n1, double& n2);
		void subtract(double& n1, double& n2);
		void multiply(double& n1, double& n2);
		void divide(double& n1, double& n2);
		void find_remainder(double& n1, double& n2);
		void squared(double& n1);
		void cubed(double& n1);
		void power(double& n1, double& n2);
		void squareRoot(double& n1);
		void factorial(double& n1);
};