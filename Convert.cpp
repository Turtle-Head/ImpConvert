// Convert.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Author:: James Frehr
// Topic: Inheritance, Polymorphism, and Dynamic Binding
// Second Version

#include <iostream>
#include "BMICalculator.h"
#include "SpeedCalculater.h"
double speedCalc(bool m);
double BMICalc(bool m);
void menu();
int main()
{
    menu();
}
void metricChoice() {
    std::cout << "\n Your Body mass index is " << BMICalc(true) << "\n";
    std::cout << "\nSpeed = distance / time :" << speedCalc(true) << " kM/hr \n";
}
void imperialChoice() {
    std::cout << "\n Your Body mass index is " << BMICalc(false) << "\n";
    std::cout << "\nSpeed = distance / time :" << speedCalc(false) << " Mph \n";
}
double speedCalc(bool m) {
    double distance, time, result;
    std::cout << "\n Please enter distance: ";
    std::cin >> distance;
    std::cout << "\n Please enter time: ";
    std::cin >> time;
    if (m == false) {
        distance *= 1.60934;
    }
    SpeedCalculater speed;
    result = speed.calculate(distance, time);
    return result;
}

double BMICalc(bool m) {
    double weight, height, result;
    std::cout << "\nPlease enter your height: ";
    std::cin >> height;
    std::cout << "\nPlease enter your weight: ";
    std::cin >> weight;
    if (m == false) {
        height *= 0.3048;
        weight *= 0.453592;
    }
    BMICalculator BMI;
    result = BMI.calculate(weight, height);
    return result;
}

double speedCalc()
{
    return 0.0;
}

void menu() {
    bool exit = true;
    double height, weight, BMI, speed, time, distance;
    int choice = 0;

    while (exit) {
        std::cout << "\n--Calculator--\n ";
        std::cout << "- 0 - Exit Calculator - \n";
        std::cout << " - 1 - Metric - \n";
        std::cout << " - 2 - Imperial - \n";
        std::cout << "- Please enter your preferred unit system: ";
        std::cin >> choice;
        switch (choice) {
        case 0: {
            exit = !exit;
            break; 
        }
        case 1: {
            metricChoice();
            break;
        }
        case 2: {
            imperialChoice();
            break;
            }

        }
    }

}
