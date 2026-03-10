#include <iostream>
using namespace std;
// factorial of a number using while loop
int main() {
    int number;
    unsigned long long factorial = 1; // Use unsigned long long to handle large factorials
    cout << "Enter a positive integer: ";
    cin >> number;
    if (number < 0) {
        cout << "Error! Factorial of a negative number doesn't exist." << endl;
    } else {
        int i = 1;
        while (i <= number) {
            factorial *= i; // Multiply factorial by i
            i++; // Increment i
        }
        cout << "Factorial of " << number << " = " << factorial << endl;
    }
    return 0;
}