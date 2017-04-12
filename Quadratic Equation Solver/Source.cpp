#include <iostream>
#include <cmath>

bool quadraticFormula(double a, double b, double c, double totalResults[])
{
	if (((b*b) - (4 * a*c)) < 0)
	{
		std::cout << "\nSquare root can not be performed with a negative number" << std::endl;
		return false;
	}
	double numeratorSqrtResult = sqrt((b*b) - (4 * a*c));
	double denominatorResult = 2 * a;
	double addNegativeTo_b = 0 - b;

	if (denominatorResult == 0)
	{
		std::cout << "Denominator is zero\n";
		return false;
	}

	totalResults[0] = (addNegativeTo_b + numeratorSqrtResult) / denominatorResult;
	totalResults[1] = (addNegativeTo_b - numeratorSqrtResult) / denominatorResult;

	return true;
}

int main()
{
	double a, b, c;
	/*double a = -5;
	double b = 10; 
	double c = 250;*/
	double x[2];       //store results of x

	std::cout << "Please Enter a, b, and c to get Results of x:\n";

	std::cout << "a: ";
	std::cin >> a;

	std::cout << "b: ";
	std::cin >> b;

	std::cout << "c: ";
	std::cin >> c;

	if (quadraticFormula(a, b, c, x))
	{
		std::cout << "\nYour Results are:" << std::endl;
		std::cout << "x = " << x[0]        << std::endl;
		std::cout << "x = " << x[1]        << std::endl;
	}

	std::cout << std::endl << "Press any key to continue :)";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();
	return 0;
}

class quad
{
public:
	quad();
	~quad();

private:

};

quad::quad()
{
}

quad::~quad()
{
}