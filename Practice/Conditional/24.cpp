#include <iostream>
using namespace std;
//Write a program in C++ to read any Month Number in integer and display the number of days for this month.
int main()
{
    int monthNumber;
    cout << "Enter a month number (1-12): ";
    cin >> monthNumber;
    switch (monthNumber) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "31 days" << endl;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "30 days" << endl;
            break;
        case 2:
            cout << "28 or 29 days (depending on leap year)" << endl;
            break;
        default:
            cout << "Invalid month number. Please enter a number between 1 and 12." << endl;  
    }
   return 0;
}