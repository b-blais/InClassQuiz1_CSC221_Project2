/*
Title: In Class Quiz 1 - Project 2
File Name : InClassQuiz1_Project2
Programmer : Brion Blais
Date : 10 / 2024
Requirements :

1. Add
2. Subtract
3. Multiplication
4. Division
5. Power

The user should enter the number of the operation and then
be prompted for the necessary input and display the result.
You do NOT need to make the program allow for more than 1 operation
during the run of the program.However you will receive 5 additional points
if you make the calculator repeatable so that the user doesn't have restart the program
when they want to perform another operation.

 */


#include <iostream>
#include <string>
using namespace std;

int main()
{
    int userSelection;
    double number1;
    double number2;
    double calc = 0.0;
    string answer = "No";
    bool makingEntries = 1;

    while (makingEntries == 1) {

        cout << "Welcome to the calculator!  Please enter one of the five options below by entering the number: \n" << endl;
        cout << "1. Add" << endl;
        cout << "2. Subtract" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Power" << endl;
        cout << endl;

        cin >> userSelection;

        while ((userSelection < 1) || userSelection > 5) {
            cout << "You have made an invalid entry, please try again.\n";
            cin.clear();
            cin >> userSelection;
        }

        if (userSelection == 1) {
            cout << "Please enter the numbers to be added with a space between them:\n";
            cin >> number1 >> number2;
            calc = number1 + number2;
            cout << number1 << " + " << number2 << " = " << number1 + number2;
            number1 = 0;
            number2 = 0;
        }
        else if (userSelection == 2) {
            cout << "Please enter the numbers to be subtracted with a space between them:\n";
            cin >> number1 >> number2;
            calc = number1 - number2;
            cout << number1 << " - " << number2 << " = " << calc;
            number1 = 0;
            number2 = 0;
        }
        else if (userSelection == 3) {
            cout << "Please enter the numbers to be multiplied with a space between them:\n";
            cin >> number1 >> number2;
            calc = number1 * number2;
            cout << number1 << " X " << number2 << " = " << calc;
            number1 = 0;
            number2 = 0;
        }
        else if (userSelection == 4) {
            cout << "Please enter the numbers to be divided with a space between them:\n";
            cin >> number1 >> number2;
            while (number2 == 0) {
                cout << "You cannot divide by 0, please enter new numbers with a space between them:\n";
                cin >> number1 >> number2;
            }
            calc = number1 / number2;
            cout << number1 << " / " << number2 << " = " << calc;
            number1 = 0;
            number2 = 0;
        }
        else if (userSelection == 5) {
            cout << "Please enter the number to be raised first and the exponent second with a space between them:\n";
            cin >> number1 >> number2;
            calc = pow(number1, number2);
            cout << number1 << " to the power of " << number2 << " = " << calc;
            number1 = 0;
            number2 = 0;
        }

        cout << endl;
        cout << "Would you like to make another calculation? Yes or No\n" << endl;
        cin >> answer;

        if (answer == "Yes") {
            makingEntries = 1;
        }
        else {
            makingEntries = 0;
        }

        
    }
    return 0;
}