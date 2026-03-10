#include <iostream>
using namespace std;
/*Write a C++ program that prompts the user to enter a positive integer and then calculates and prints the
 sum of the squares of each digit in that number using a do-while loop*/ 
int main(){
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;
    
    int sumOfSquares = 0;
    
    do
    {
        int digit = number % 10; // Get the last digit
        sumOfSquares += digit * digit; // Add the square of the digit to the sum
        number /= 10; // Remove the last digit
    } while(number > 0);
    
    cout << "Sum of squares of digits: " << sumOfSquares << endl;
   return 0;
}