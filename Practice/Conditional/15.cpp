#include <iostream>
using namespace std;
//Write a C++ program to check whether a triangle can be formed with the given values for the angles
int main()
{
    double angle1, angle2, angle3;
    cout << "Enter first angles of the triangle: ";
    cin >> angle1 ;
    cout << "Enter second angle of the triangle: ";
    cin >> angle2 ;
    cout << "Enter third angle of the triangle: ";
    cin >> angle3 ;
    if (angle1 + angle2 + angle3 == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0) {
        cout << "The triangle is valid." << endl;
    } else {
        cout << "The triangle is not valid." << endl;
    }
   return 0;
}