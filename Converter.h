#pragma once
class Converter
{


public:
	virtual double toMetric(double value);	// required
	virtual double toImperial(double value);	// required
	virtual void description() const;		// required
	
	

	Converter() = default;
};

