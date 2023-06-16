#pragma once
#include "Calculator.h"
#include <iostream>
class SpeedCalculater :
    public Calculator
{
public:
    double calculate(double distance, double time) override;
    void description() const override;
protected:
    std::string interpretResult(double result) override; //should calculate speed dividing the given distance by time
    


};

