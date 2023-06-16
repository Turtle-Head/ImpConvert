#include "BMICalculator.h"
#include <iostream>

double BMICalculator::calculate(double weight, double height)
{
    double result = weight / (height * height);
    return result;
}

std::string BMICalculator::interpretResult(double result)
{
    return std::string();
}

void BMICalculator::description() const
{
    std::cout << "\nCalculates Body Mass Index\n";
}
