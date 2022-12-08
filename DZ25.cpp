#include <iostream>

class Fraction
{
	int numerator;
	int denominator;
public:
	void Input()
	{
		std::cout << "Enter numerator: ";
		std::cin >> numerator;
		std::cout << "Enter denominator: ";
		std::cin >> denominator;
	}
	void Addition(int X)
	{
		numerator += (X * denominator);
		std::cout << numerator << "/" << denominator << "\n";
	}
	void Substraction(int X)
	{
		numerator -= (X * denominator);
		std::cout << numerator << "/" << denominator << "\n";
	}
	void Multiplication(int X)
	{
		numerator *= X;
		std::cout << numerator << "/" << denominator << "\n";
	}
	void Division(int X)
	{
		denominator *= X;
		std::cout << numerator << "/" << denominator << "\n";
	}
};
int main()
{

}
