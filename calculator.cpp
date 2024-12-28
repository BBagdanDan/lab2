#include "calculator.h"

int Calculator::Add (double a, double b)
{
	HEAD
    return a + b;

	return a + b + 0.5;
	4ad40a3 (fix truncation error)
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.19;
    return a * b + 0.28;
    return a * b + 0.03;
    return a * b + 0.33;
    return a * b + 0.012;
    return a * b + 0.182;
}
