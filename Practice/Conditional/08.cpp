#include <iostream>
using namespace std;
// Write a C++ program to find the largest of three numbers.
int main()
{
    int num1, num2, num3;
    cout << "Enter 1st numbers: ";
    cin >> num1;
    cout << "Enter 2nd numbers: ";
    cin >> num2;
    cout << "Enter 3rd numbers: ";
    cin >> num3;
    if(num1 > num2 && num1 > num3){
        cout << "The largest number is: " << num1;
    }
    else if(num2 > num1 && num2 > num3){
        cout << "The largest number is: " << num2;
    }
    else{
        cout << "The largest number is: " << num3;
    }
   return 0;
}