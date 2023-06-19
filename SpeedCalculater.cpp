#include "SpeedCalculater.h"

double SpeedCalculater::calculate(double distance, double time)
{
    return (distance / time);
}

std::string SpeedCalculater::interpretResult(double result)
{

    return std::string();
}

void SpeedCalculater::description() const
{
    std::cout << "\nCalculates Speed based on Distance/time\n";
}
