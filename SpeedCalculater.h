#pragma once
#include "Calculator.h"
#include <iostream>
class SpeedCalculater :
    public Calculator
{
public:
    double calculate(double distance, double time) override;    // calculates speed by dividing the given distance by time
protected:
    std::string interpretResult(double result) override;
    void description() const override;

    


};

