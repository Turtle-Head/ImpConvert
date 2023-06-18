#include "BMICalculator.h"
#include <iostream>

double BMICalculator::calculate(double weight, double height)
{
    // Formula to calculate in metric is weight / height squared so w use pow(arg, 2) to square height
    double result = weight / pow(height,2);
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
