#include <iostream>
using namespace std;
//Write a C++ program which computes the area of various geometrical shapes using a menu-driven approach. 
int main()
{
    int choice;
    cout << "Choose a shape to calculate the area:" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1: {
            double radius, area;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            area = 3.14159 * radius * radius;
            cout << "Area of the circle: " << area << endl;
            break;
        }
        case 2: {
            double length, width, area;
            cout << "Enter the length and width of the rectangle: ";
            cin >> length >> width;
            area = length * width;
            cout << "Area of the rectangle: " << area << endl;
            break;
        }
        case 3: {
            double base, height, area;
            cout << "Enter the base and height of the triangle: ";
            cin >> base >> height;
            area = 0.5 * base * height;
            cout << "Area of the triangle: " << area << endl;
            break;
        }
        default:
            cout << "Invalid choice. Please select a number between 1 and 3." << endl;
    }
   return 0;
}