#pragma once
#include "converter.h"
class HeightConverter :
    public Converter
{
public:
    double toMetric(double value) override;
    double toImperial(double value) override;
    void description() const override;
};

