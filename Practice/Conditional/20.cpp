#include <iostream>
using namespace std;
//Write a program in C++ to accept a grade and declare the equivalent description :
int main()
{
    char grade;
    cout << "Enter a grade (E, V, G, A, F): ";
    cin >> grade;
    if(grade == 'E' || grade == 'e') {
        cout << "Excellent" << endl;
    } else if(grade == 'V' || grade == 'v') {
        cout << "Very Good" << endl;
    } else if(grade == 'G' || grade == 'g') {
        cout << "Good" << endl;
    } else if(grade == 'A' || grade == 'a') {
        cout << "Average" << endl;
    } else if(grade == 'F' || grade == 'f') {
        cout << "Fail" << endl;
    } else {
        cout << "Invalid grade entered." << endl;
    }
   return 0;
}