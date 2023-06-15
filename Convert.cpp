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
    double height, weight;
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
            std::cin >> choice;
            switch (choice)
            {
            case 1:break;
            case 2:break;
            case 3:break;
            case 0:continue;
            }
            break; 
        }
        case 2: {
            // do next menu    
            break; 
        }
        case 3: { 
            // some action
            break; 
        }
        case 4: { 
            break; 
        }
        case 5: { 
            break; 
        }
        case 6: { 
            break; 
        }
        }
    }
}

