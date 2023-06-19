#include "BMICalculator.h"
#include <iostream>

double BMICalculator::calculate(double weight, double height)
{
    std::string health;
    double result = weight / pow(height,2);
    if (result < 18.5) {
        health = "Under Weight";
    }
    else if (result > 18.5 && result < 24.9) {
        health = "Normal Weight";
    }
    else if (result > 25 && result < 29.9) {
        health = "Over Weight";
    }
    else if (result > 30 && result < 34.9) {
        health = "Obese (Class 1)";
    }
    else if (result > 35 && result < 39.9) {
        health = "Obese (Class 2)";
    }
    else if (result > 40) {
        health = "Extremely Obese";
    }
    std::cout << "\n Health assessment: " << health << std::endl;
    return result;
}

std::string BMICalculator::interpretResult(double result)
{
    std::string health;
    if (result < 18.5) {
        health = "Under Weight";
    }
    else if (result > 18.5 && result < 24.9) {
        health = "Normal Weight";
    }
    else if (result > 25 && result < 29.9) {
        health = "Over Weight";
    }
    else if (result > 30 && result < 34.9) {
        health = "Obese (Class 1)";
    }
    else if (result > 35 && result < 39.9) {
        health = "Obese (Class 2)";
    }
    else if (result > 40) {
        health = "Extremely Obese";
    }
    return std::string(health);
}

void BMICalculator::description() const
{
    std::cout << "\nCalculates Body Mass Index\n";
}
