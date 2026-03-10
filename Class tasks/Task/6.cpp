#include<iostream>
using namespace std;
// largest of N numbers using while loop
int main(){
    int n, number, largest;
    int i=1;
    cout << "How many numbers do you want to enter? ";
    cin >> n;
    if(n <= 0){
        cout << "Please enter a positive integer." << endl;
        return 1; // Exit with an error code
    }
    cout << "Enter " << n << " numbers: ";
    cin >> largest; // Assume the first number is the largest
    while(i < n){
        cin >> number;
        if(number > largest){
            largest = number; // Update largest if current number is greater
        }
        i++;
    }
    cout << "The largest number is: " << largest << endl;
    return 0;

}