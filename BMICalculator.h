#pragma once
#include "Calculator.h"
class BMICalculator :
    public Calculator
{
   /* How to calculate Body Mass Index.Body Mass Index is a simple calculation using a person's height and weight. The formula is BMI = kg/m2 where kg is a person's weight in kilograms and m2 is their height in metres squared.A BMI of 25.0 or more is overweight, while the healthy range is 18.5 to 24.9.*/

public:
    double calculate(double weight, double height) override;
protected:
    std::string interpretResult(double result) override;
    virtual void description()const override;

};

