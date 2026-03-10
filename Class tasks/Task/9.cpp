#include<iostream>
using namespace std;
//count digits in a number
int main(){
    int number, digitCount = 0;
    cout << "Enter a number: ";
    cin >> number;
    if(number == 0){
        digitCount = 1; // Zero has one digit
    } else {
        while(number != 0){
            number /= 10; // Remove the last digit
            digitCount++; // Increment the digit count
        }
    }
    cout << "The number of digits is: " << digitCount << endl;
    return 0;
}