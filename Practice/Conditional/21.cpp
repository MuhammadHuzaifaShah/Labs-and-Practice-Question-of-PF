#include <iostream>
using namespace std;
//Write a C++ program to read any day number in integer and display the day name in word format. 
int main()
{
    int dayNumber;
    cout << "Enter a day number (1-7): ";
    cin >> dayNumber;
    switch (dayNumber) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid day number. Please enter a number between 1 and 7." << endl;
    }
   return 0;
}