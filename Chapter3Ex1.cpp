// Name: Logen Wolfe
// Date: 9/28/2026
// Program: Chapter 3 Excercise 1
// Description: Write a program that calculates a car’s gas mileage. 
// The program should ask the user to enter the number of gallons of gas the car can hold and the number of miles it can be driven on a full tank. 
// It should then calculate and display the number of miles per gallon the car gets.

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double gallons;
    double miles;
    double mpg;
    
    cout << "Welcome to Logen's Gas Mileage Calculator!" << endl;
    cout << "How much gas can your car hold? (Please use gallons!)" << endl;
    cin >> gallons;
    cout << "Now, how far can your car take you on a full tank? (Miles once again!)" << endl;
    cin >> miles; 
    mpg = miles / gallons;
    cout << "Looks like your car is gettin' about.." << mpg << setprecision(2) << " miles per gallon! Be sure you have enough money to refill!" << endl;

    return 0;
}

