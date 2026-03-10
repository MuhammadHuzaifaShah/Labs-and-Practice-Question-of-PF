#include<iostream>
using namespace std;
/*input numbers until -1.
Print:
• total even numbers sum
• total odd numbers sum */
int main(){
    int number, evenSum = 0, oddSum = 0;
    cout << "Enter numbers (enter -1 to stop): ";
    cin >> number;
    while(number != -1){
        if(number % 2 == 0){
            evenSum += number; // Add to even sum
        } else {
            oddSum += number; // Add to odd sum
        }
        cin >> number; // Read the next number
    }
    cout << "Total even numbers sum: " << evenSum << endl;
    cout << "Total odd numbers sum: " << oddSum << endl;
    return 0;
}