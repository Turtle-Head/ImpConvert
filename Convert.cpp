// Convert.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
void menu();
int main()
{
    menu();
}

void menu() {
    bool exit = true;
    double height, weight, BMI;
    int choice = 0;

    while (exit) {
        std::cout << "\n--Converter App--\n";
        std::cout << "- 0 - Exit Converter\n";
        std::cout << " - 1 - To Metric - \n";
        std::cout << " - 2 - To Imperial - \n";
        std::cout << "- Please enter a choice: ";
        std::cin >> choice;
        switch (choice) {
        case 0: exit = !exit;
        case 1: {
            std::cout << "\n-- Metric choices:\n";
            std::cout << "- 1 - Get your Body Mass Index Score \n";
            std::cout << "- 0 - Return to previous menu -";
            std::cout << "- Please choose: ";
            std::cin >> choice; }
              switch (choice)
              {
              case 1: { // BMI = kg/m2
                  std::cout << "\nPlease enter your height in Meters: ";
                  std::cin >> height;
                  std::cout << "\nPlease enter your weight in KG: ";
                  std::cin >> weight;
                  BMI = weight / (height * height);
                  std::cout << "\n Your Body mass index is " << BMI << "\n";
                  break; }
              case 0:continue;
                  break;
              }
        case 2: {
            std::cout << "\n-- Imperial choices:\n";
            std::cout << "- 1 - Get your Body Mass Index Score \n";
            std::cout << "- 0 - Return to previous menu -";
            std::cout << "- Please choose: ";
            std::cin >> choice;
            switch (choice)
            {
            case 1: {
                std::cout << "\nPlease enter your height in Feet: ";
                std::cin >> height;
                std::cout << "\nPlease enter your weight in LB: ";
                std::cin >> weight;
                BMI = weight / (height * height);
                std::cout << "\n Your Body mass index is " << BMI << "\n";
            }
            case 0: break;


            }

        }


        }
    }

}
