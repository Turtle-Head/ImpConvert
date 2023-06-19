#include "Calculator.h"
#include <iostream>
#include "BMICalculator.h"
#

void Calculator::printResult(double result)
{
	
	std::cout << interpretResult(result)<< " Result: " << result << " ";

}

void Calculator::description() const
{
	std::cout << "\nCalculates values for this app\n";
}
