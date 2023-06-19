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
#include "Calculator.h"
#include "Converter.h"
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define CYAN "\033[36m"
#define LIGHT_GREEN_TEXT "\033[92m"
#define VIOLET_TEXT "\033[35m"


void speedCalc(bool m);
void BMICalc(bool m);
void menu();
int main()
{
      menu();
      return 0;
}

void Calculate(Calculator* obj,double value, double val2) {
    obj->printResult(obj->calculate(value, val2));  // Dynamic binding BMI
}

void speedCalc(bool m) {
    double distance, time, result;
    DistanceConverter actionObj{};
    SpeedCalculater display{};
    std::cout << LIGHT_GREEN_TEXT << "\n Please enter distance: ";
    std::cin >> distance;
    std::cout << LIGHT_GREEN_TEXT << "\n Please enter time: ";
    std::cin >> time;
    if (m == false) { 
        std::cout << LIGHT_GREEN_TEXT << " Distance in Miles: " << distance;
        // If Imperial selection was made we need to covert to maetric for the calculations
        distance = actionObj.toMetric(distance);
        // distance = dobj.toMetric(distance); // : used to convert imperial to metric
        std::cout << LIGHT_GREEN_TEXT << " Distance in KM: " << distance << "\n";
    }
    else if (m == true) {
        std::cout << LIGHT_GREEN_TEXT << " Distance in KM: " << distance;
          double distanceImperial = actionObj.toImperial(distance);
        std::cout << LIGHT_GREEN_TEXT << " Distance in Miles: " << distanceImperial << "\n";
    }
   
    Calculate(&display, distance, time);
}
// If Imperial we need to change values to metric after getting them from user
void BMICalc(bool m) {
    double weight, height, result;
    HeightConverter hobj{};   // Height Converter object : used to convert imperial to metric
    WeightConverter wobj{};   // Weight Converter object : used to convert imperial to metric
    std::cout << LIGHT_GREEN_TEXT << "\nPlease enter your height: ";
    std::cin >> height;
    std::cout << LIGHT_GREEN_TEXT << "\nPlease enter your weight: ";
    std::cin >> weight;
    // If the request for imperial measurements is made if metric = false so we need to convert to metric for the calculatioins
    if (m == false) {
        std::cout << "\n Height in Feet: " << height;
        height = hobj.toMetric(height); // : used to convert imperial to metric
        std::cout << LIGHT_GREEN_TEXT << " Height in Meters: " << height << "\n Weight in LBs: " << weight;
        weight = wobj.toMetric(weight); // : used to convert imperial to metric
        std::cout << LIGHT_GREEN_TEXT << "\n Weight in KG: " << weight << "\n";
    }
    else if (m == true) {
        double himp = hobj.toImperial(height);
        std::cout << LIGHT_GREEN_TEXT << "\n Height M: " << height << " Ft: " << himp << " ";
        double wimp = wobj.toImperial(weight);
        std::cout << LIGHT_GREEN_TEXT << " Weight KG: " << weight << " LBs: " << wimp << "\n";
    }
    BMICalculator BMI{};
     Calculate(&BMI,weight,height); // Get BMI value
     //result
    
}

void menu() {
    bool exit = true;
    int choice = 0;
    

    while (exit) {
        std::cout << LIGHT_GREEN_TEXT << "\n--Calculator--\n ";
        std::cout << LIGHT_GREEN_TEXT << "- 0 - " << YELLOW << "Exit Calculator - \n";
        std::cout << LIGHT_GREEN_TEXT << " - 1 - " << RESET << "Metric - \n";
        std::cout << LIGHT_GREEN_TEXT << " - 2 - " << RESET << "Imperial - \n";
        std::cout << RESET << "- Please enter your preferred unit system: ";
        std::cout << LIGHT_GREEN_TEXT;
        std::cin >> choice;
        switch (choice) {
        case 0: {
            exit = !exit;
            break; 
        }
        case 1: {
            BMICalc(true);
            speedCalc(true);
            std::cout << " Kph \n";
            break;
        }
        case 2: {
            BMICalc(false);
            speedCalc(false);
            std::cout << " Mph \n";
            break;
            }

        }
    }
    
}
