#include <iostream>
using namespace std;
//Write a C++ program to check whether a triangle is Equilateral, Isosceles or Scalene.
int main()
{
    double side1, side2, side3;
    cout << "Enter the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;
    if (side1 == side2 && side2 == side3) {
        cout << "The triangle is Equilateral." << endl;
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        cout << "The triangle is Isosceles." << endl;
    } else {
        cout << "The triangle is Scalene." << endl;
    }
   return 0;
}