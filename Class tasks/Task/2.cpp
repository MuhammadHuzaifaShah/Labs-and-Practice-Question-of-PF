#include <iostream>
using namespace std;
int main(){
    int upperLimit;
    int number, oddSum = 0, evenSum = 0;
    cout << "Enter the upper limit: ";
    cin >> upperLimit;
    number = 1;
    while(number <= upperLimit){
        if(number % 2 == 0){
            evenSum = evenSum+number;
        } else {
            oddSum = oddSum+number;
        }
        number++;
    }
    cout << "Sum of odd numbers: " << oddSum << endl;
    cout << "Sum of even numbers: " << evenSum << endl;
    return 0;
}