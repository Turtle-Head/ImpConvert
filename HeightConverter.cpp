#include "HeightConverter.h"

double HeightConverter::toMetric(double value)
{
    value *= 0.3048;
    return value;
}

double HeightConverter::toImperial(double value)
{
    return 0.0;
}

void HeightConverter::description() const
{
}
