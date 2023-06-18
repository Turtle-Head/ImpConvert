#include "WeightConverter.h"

double WeightConverter::toMetric(double value)
{
    // coversion from LBs to KG
    value *= 0.453592;
    return value;
}

double WeightConverter::toImperial(double value)
{   
    // conversion from KG to LBs
    value /= 0.453592;
    return value;
}

void WeightConverter::description() const
{
}
