#include <iostream>
using namespace std;
 /*Write a C++ program to accept a coordinate point in an XY coordinate
  system and determine in which quadrant the coordinate point lies.*/
int main()
{
    int x, y;
    cout << "Enter the X coordinate: ";
    cin >> x;
    cout << "Enter the Y coordinate: ";
    cin >> y;
    if (x > 0 && y > 0) {
        cout << "The point is in the first quadrant." << endl;
    } else if (x < 0 && y > 0) {
        cout << "The point is in the second quadrant." << endl;
    } else if (x < 0 && y < 0) {
        cout << "The point is in the third quadrant." << endl;
    } else if (x > 0 && y < 0) {
        cout << "The point is in the fourth quadrant." << endl;
    } else {
        cout << "The point is on the origin or on one of the axes." << endl;
    }
   return 0;
}