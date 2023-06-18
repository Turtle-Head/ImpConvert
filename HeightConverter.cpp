#include "HeightConverter.h"

double HeightConverter::toMetric(double value)
{
    // feet to meters conversion
    value *= 0.3048;
    return value;
}

double HeightConverter::toImperial(double value)
{
    // meters to feet conversion
    value /= 0.3048;
    return value;
}

void HeightConverter::description() const
{
}
