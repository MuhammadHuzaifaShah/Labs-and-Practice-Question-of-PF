#include <iostream>
using namespace std;
//Ask the user to enter 5 numbers using a loop and display the largest number.
int main(){
    int number, largest;
    cout << "Enter 5 numbers: ";
    cin >> largest; // Assume the first number is the largest
    for(int i = 1; i < 5; i++){
        cin >> number;
        if(number > largest){
            largest = number; // Update largest if current number is greater
        }
    }
    cout << "The largest number is: " << largest << endl;
    return 0;
}