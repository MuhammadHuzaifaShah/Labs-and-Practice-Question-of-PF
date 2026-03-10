#include<iostream>
using namespace std;
/*A book store awards points to its customers based on the number of books purchased each month. 
The points are awarded as follows:
If a customer purchases 0 books, he or she earns 0 points.
If a customer purchases 1 book, he or she earns 5 points.
If a customer purchases 2 books, he or she earns 15 points.
If a customer purchases 3 or more books, he or she earns 30 points.
Design an algorithm that asks the user to enter the number of books that he or she has purchased this 
month and displays the number of points awarded.*/
int main()
{
    int booksPurchased, points;

    cout << "Enter the number of books purchased this month: ";
    cin >> booksPurchased;

    if (booksPurchased == 0) {
        points = 0;
    } else if (booksPurchased == 1) {
        points = 5;
    } else if (booksPurchased == 2) {
        points = 15;
    } else {
        points = 30;
    }

    cout << "You have earned " << points << " points." << endl;

    return 0;
}