#include <iostream>
using namespace std;
//Write a program in C++ which is a Menu-Driven Program to perform a simple calculation.
int main()
{
    int choice;
    double num1, num2, result;
    cout << "Choose an operation:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case 2:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case 3:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case 4:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result << endl;  
            } else {
                cout << "Error: Division by zero is not allowed."<<endl;  
            }
            break;  
        default:
            cout <<"Invalid choice. Please select a number between 1 and 4."<<endl;  
    }
   return 0;
}