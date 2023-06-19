#pragma once
#include <string>
class Calculator
{
public:
	virtual double calculate(double val1, double val2) = 0;
	void printResult(double result);	// sould take in result from calculate and print result
	virtual void description() const;	// should print a description detailing the specific functionality off each calculator class
protected:
	virtual std::string interpretResult(double result) = 0;		/* should take result value and return am omterpretation, should be easy to understand and relevant to the computation that has been performed */
	

};

