// Convert.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "BMICalculator.h"
#include "SpeedCalculater.h"
double speedCalc();
double BMICalc();
void menu();
int main()
{
    menu();
}

double speedCalc() {
    double distance, time;
    std::cout << "\n Please enter distance: ";
    std::cin >> distance;
    std::cout << "\n Please enter time: ";
    std::cin >> time;
    SpeedCalculater speed; 
    return speed.calculate(distance, time);
}

double BMICalc() {
    double weight, height;
    std::cout << "\nPlease enter your height: ";
    std::cin >> height;
    std::cout << "\nPlease enter your weight: ";
    std::cin >> weight;
    BMICalculator BMI;
    return BMI.calculate(weight, height);
}

void menu() {
    bool exit = true;
    double height, weight, BMI, speed, time, distance;
    int choice = 0;

    while (exit) {
        std::cout << "\n--Converter App--\n";
        std::cout << "- 0 - Exit Converter\n";
        std::cout << " - 1 - To Metric - \n";
        std::cout << " - 2 - To Imperial - \n";
        std::cout << "- Please enter a choice: ";
        std::cin >> choice;
        switch (choice) {
        case 0: {
            exit = !exit;
            break; 
        }
        case 1: {
                     std::cout << "\n Your Body mass index is " << BMICalc() << "\n";
                     std::cout << "\nSpeed = distance / time :" << speedCalc() << " kM/hr \n";
                  break;
        }
        case 2: {
                std::cout << "\n Your Body mass index is " << BMICalc() << "\n";
                std::cout << "\nSpeed = distance / time :" << speedCalc() << " Mph \n"; 
                break;
            }

        }
    }

}
