#include "DistanceConverter.h"

double DistanceConverter::toMetric(double value)
{
    value *= 1.60934;
    return value;
}

double DistanceConverter::toImperial(double value)
{
    value /= 1.60934;
    return value;
}

void DistanceConverter::description() const
{
}
