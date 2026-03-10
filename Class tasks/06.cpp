#include<iostream>
using namespace std;
/*Design an algorithm that takes two integers from the user, 
displays them on screen, swaps them, and again displays them on screen.*/
int main(){
    int num1, num2, temp;
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;

    cout << "Before swapping: " << endl;
    cout << "First integer: " << num1 << endl;
    cout << "Second integer: " << num2 << endl;

    // Swapping
    temp = num1; // Store the value of num1 in temp
    num1 = num2; // Assign the value of num2 to num1
    num2 = temp; // Assign the value stored in temp (original num1) to num2

    cout << "After swapping: " << endl;
    cout << "First integer: " << num1 << endl;
    cout << "Second integer: " << num2 << endl;

    return 0;
}