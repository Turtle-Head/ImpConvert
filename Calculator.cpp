#include "Calculator.h"
#include <iostream>
#include "BMICalculator.h"
#

void Calculator::printResult(double result)
{
	std::cout << "Result: " << result << "\n";

}

void Calculator::description() const
{
	std::cout << "\nCalculates values for this app\n";
}
