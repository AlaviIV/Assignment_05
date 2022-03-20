// Date: 03/19/2022
// Description: Chapter 5 - Assignment
// Developed by Group 3: Alavi Isa, Eduardo Gardia, Matthew Batres, and Victor Huerta

#include <iostream>
#include "input.h" // checks input
#include "vectorContainer.h"

using namespace std;
// Prototype
int menuOption();

int main()
{
    do
    {
        switch (menuOption())
        {
        case 0: exit(1); break;
        case 1:
        {
            vectorContainer v;
            v.vectorMain();
        } break;
        case 2:
        {
            cout << "\n\t\tCase 2: here";
        } break;
        case 3:
        {
            cout << "\n\t\tCase 3: here";
        } break;
        default: cout << "\n\tERROR - Invalid option. Please re-enter.\n"; break;
        }
    } while (true);
    return EXIT_SUCCESS;
}

// return a valid option (0...3)
int menuOption()
{
    system("cls");
    cout << "\n\t==============================================================================================";
    cout << "\n\tCMPR131 Chapter 5 - Vector and List Container (03/19/2022)";
    cout << "\n\tDeveloped by Group 3: Alavi, Eduardo";
    cout << "\n\t==============================================================================================";
    cout << "\n\t\t1> Vector container";
    cout << "\n\t\t2> List container";
    cout << "\n\t\t3> Application using Vector and/or List container";
    cout << "\n\t----------------------------------------------------------------------------------------------";
    cout << "\n\t\t0> Exit";
    cout << "\n\t==============================================================================================\n";

    int option = inputInteger("\tOption: ", 0, 3);
    system("cls");

    return option;
}