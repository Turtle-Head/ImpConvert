#pragma once
#include "Calculator.h"
#include <iostream>
class SpeedCalculater :
    public Calculator
{
public:
    double calculate(double distance, double time) override;    // calculates speed by dividing the given distance by time
    void description() const override;
protected:
    std::string interpretResult(double result) override; 
    


};

