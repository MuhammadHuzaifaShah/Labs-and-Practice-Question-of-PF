#include<iostream>
using namespace std;
/*The area of a rectangle is the rectangle’s length times its width. 
Design an algorithm that asks for the length and width of two rectangles. The algorithm 
should tell the user which rectangle has the greater area, or whether the areas are the same.*/
int main()
{
    double length1, width1, length2, width2, area1, area2;
    
    cout << "Enter the length of the first rectangle: ";
    cin >> length1;
    cout << "Enter the width of the first rectangle: ";
    cin >> width1;

    cout << "Enter the length of the second rectangle: ";
    cin >> length2;
    cout << "Enter the width of the second rectangle: ";
    cin >> width2;
    
    area1 = length1 * width1;
    area2 = length2 * width2;
    
    if (area1 > area2) {
        cout << "The first rectangle has a greater area." << endl;
    } else if (area2 > area1) {
        cout << "The second rectangle has a greater area." << endl;
    } else {
        cout << "Both rectangles have the same area." << endl;
    }
    
    return 0;
}