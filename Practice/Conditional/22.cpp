#include <iostream>
using namespace std;
//Write a program in C++ to read any digit and display it in the word. 
int main()
{
    int digit;
    cout << "Enter a digit (0-9): ";
    cin >> digit;
    switch (digit) {
        case 0:
            cout << "Zero" << endl;
            break;
        case 1:
            cout << "One" << endl;
            break;
        case 2:
            cout << "Two" << endl;
            break;
        case 3:
            cout << "Three" << endl;
            break;
        case 4:
            cout << "Four" << endl;
            break;
        case 5:
            cout << "Five" << endl;
            break;
        case 6:
            cout << "Six" << endl;
            break;
        case 7:
            cout << "Seven" << endl;
            break;
        case 8:
            cout << "Eight" << endl;
            break;
        case 9:
            cout << "Nine" << endl;
            break;
        default:
            cout << "Invalid input. Please enter a digit between 0 and 9." << endl;
    }
   return 0;
}