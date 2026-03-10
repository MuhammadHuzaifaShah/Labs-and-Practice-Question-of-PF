#include<iostream>
using namespace std;
//largest of N numbers
int main(){
    int n, largest;
    cout << "Enter the number of elements: ";
    cin >> n;
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1; // Exit with an error code
    }
    cout << "Enter " << n << " numbers: ";
    cin >> largest; // Initialize largest with the first number
    int i = 1;
   while(i<n){
        int num;
        cin >> num;
        if (num > largest) {
            largest = num; // Update largest if current number is greater
        }
        i++;
    }
    cout << "The largest number is: " << largest << endl;
    return 0;
}