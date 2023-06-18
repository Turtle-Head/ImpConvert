#include "DistanceConverter.h"

double DistanceConverter::toMetric(double value)
{
    // Conversion from Miles to Kilometers
    value *= 1.60934;
    return value;
}

double DistanceConverter::toImperial(double value)
{
    // Conversion from Kilometers to Miles
    value /= 1.60934;
    return value;
}

void DistanceConverter::description() const
{
}
