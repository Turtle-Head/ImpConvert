#include "SpeedCalculater.h"

double SpeedCalculater::calculate(double distance, double time)
{
    return (distance / time);
}

std::string SpeedCalculater::interpretResult(double result)
{
    std::string otp;
    if (result > 0 && result <= 3 && result != 0) {
        otp = " Walking... ";
    }
    else if (result > 4 && result < 15) {
        otp = " Jogging leisurly... ";
    }
    else if (result >= 15 && result < 30) {
        otp = " Sprnting like the wind... ";
    }
    else otp = " Driving... ";
    return otp;
}

void SpeedCalculater::description() const
{
    std::cout << "\nCalculates Speed based on Distance/time\n";
}
