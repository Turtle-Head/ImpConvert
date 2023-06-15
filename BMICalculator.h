#pragma once
#include "Calculator.h"
class BMICalculator :
    public Calculator
{
public:
    double calculate(double weight, double height) override;
protected:
    std::string interpretResult(double result) override;
    virtual void description() const override;
};

