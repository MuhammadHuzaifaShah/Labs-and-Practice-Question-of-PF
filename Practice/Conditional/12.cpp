#include <iostream>
using namespace std;
/*Write a C++ program to read the roll no,
 name and marks of three subjects and calculate the total, percentage and division.*/
int main()
{
    int rollNo, marks1, marks2, marks3;
    string name;
    double total, percentage;
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter marks in Physics: ";
    cin >> marks1 ;
    cout << "Enter marks in Chemistry: ";
    cin >> marks2 ;
    cout << "Enter marks in Mathematics: ";
    cin >> marks3 ;
    total = marks1 + marks2 + marks3;
    percentage = total / 3.0;
    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;
   return 0;
}