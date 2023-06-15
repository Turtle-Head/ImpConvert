#pragma once
#include "converter.h"
class WeightConverter :
    public converter
{
public:
    double toMetric(double value) override;
    double toImperial(double value) override;
    void description() const override;
};

