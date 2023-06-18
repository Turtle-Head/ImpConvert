// Convert.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Author:: James Frehr
// Topic: Inheritance, Polymorphism, and Dynamic Binding
// Second Version

#include <iostream>
#include "BMICalculator.h"
#include "SpeedCalculater.h"
#include "DistanceConverter.h"
#include "HeightConverter.h"
#include "WeightConverter.h"

double speedCalc(bool m);
double BMICalc(bool m);
void menu();
int main()
{
    menu();
}
void metricChoice() {
    std::cout << "\n Your Body mass index is " << BMICalc(true) << "\n";
    std::cout << "\nSpeed = distance / time :" << speedCalc(true) << " Kph \n";
}
void imperialChoice() {
    std::cout << "\n Your Body mass index is " << BMICalc(false) << "\n";
    std::cout << "\nSpeed = distance / time :" << speedCalc(false) << " Mph \n";
}
double speedCalc(bool m) {
    double distance, time, result;
    DistanceConverter dobj; // DistanceConverter object : used to convert imperial to metric
    std::cout << "\n Please enter distance: ";
    std::cin >> distance;
    std::cout << "\n Please enter time: ";
    std::cin >> time;
    if (m == false) { 
        std::cout << " Distance in Miles: " << distance;
        // If Imperial selection was made we need to covert to maetric for the calculations
        distance = dobj.toMetric(distance); // : used to convert imperial to metric
        std::cout << " Distance in KM: " << distance << "\n";
    }
    else if (m == true) {
        std::cout << " Distance in KM: " << distance;
        double dimp = dobj.toImperial(distance);
        std::cout << " Distance in Miles: " << dimp << "\n";
    }
    SpeedCalculater speed;
    result = speed.calculate(distance, time);   // calculates speed based on distance/time
    return result;
}
// If Imperial we need to change values to metric after getting them from user
double BMICalc(bool m) {
    double weight, height, result;
    HeightConverter hobj;   // Height Converter object : used to convert imperial to metric
    WeightConverter wobj;   // Weight Converter object : used to convert imperial to metric
    std::cout << "\nPlease enter your height: ";
    std::cin >> height;
    std::cout << "\nPlease enter your weight: ";
    std::cin >> weight;
    // If the request for imperial measurements is made if metric = false so we need to convert to metric for the calculatioins
    if (m == false) {
        std::cout << "\n Height in Feet: " << height;
        height = hobj.toMetric(height); // : used to convert imperial to metric
        std::cout << " Height in Meters: " << height << "\n Weight in LBs: " << weight;
        weight = wobj.toMetric(weight); // : used to convert imperial to metric
        std::cout << "\n Weight in KG: " << weight << "\n";
    }
    else if (m == true) {
        double himp = hobj.toImperial(height);
        std::cout << "\n Height M: " << height << " Ft: " << himp << "\n";
        double wimp = wobj.toImperial(weight);
        std::cout << "\n Weight KG: " << weight << " LBs: " << wimp << "\n";
    }
    BMICalculator BMI;
    result = BMI.calculate(weight, height); // Get BMI value
    return result;
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
