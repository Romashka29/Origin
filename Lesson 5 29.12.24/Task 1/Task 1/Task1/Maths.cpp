#include "Maths.h"
#include <cmath>

double add (double a, double b)
{
	return a + b;
}
double subtract(double a, double b)
{
	return a - b;
}
double multiply(double a, double b)
{
	return a * b;
}
double divide(double a, double b)
{
	if (b!=0)
	{return a / b;
	}
	else
	{
		throw"�� ���� ������ ������!";
	}
	
}
double power(double base, int exponent)
{
	return std::pow(base, exponent);
}