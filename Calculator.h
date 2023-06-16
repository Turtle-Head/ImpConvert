#pragma once
#include <string>
class Calculator
{
public:
	virtual double calculate(double val1, double val2) = 0;
	void printResult(double result);
	virtual void description()const;
protected:
	virtual std::string interpretResult(double result) = 0;

};

