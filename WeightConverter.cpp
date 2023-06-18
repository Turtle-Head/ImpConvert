#include "WeightConverter.h"

double WeightConverter::toMetric(double value)
{
    value *= 0.453592;
    return value;
}

double WeightConverter::toImperial(double value)
{
    value /= 0.453592;
    return value;
}

void WeightConverter::description() const
{
}
