#include "SpeedCalculater.h"

double SpeedCalculater::calculate(double distance, double time)
{
    return (distance / time);
}

std::string SpeedCalculater::interpretResult(double result)
{
    std::string otp;
    if (result < 1 && result != 0) {
        otp = "Walking";
    }
    else if (result > 1 && result < 30) {
        otp = "Jogging";
    }
    else if (result > 75 && result < 100) {
        otp = "Sprnting";
    }
    else otp = "Run forest run";
    return otp;
}

void SpeedCalculater::description() const
{
    std::cout << "\nCalculates Speed based on Distance/time\n";
}
