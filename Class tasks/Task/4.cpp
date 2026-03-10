#include<iostream>
using namespace std;
/*nput numbers until -1.
Print:
• total even numbers
• total odd numbers */
int main(){
    int number, evenCount = 0, oddCount = 0;
    cout << "Enter numbers (enter -1 to stop): ";
    while(true){
        cin >> number;
        if(number == -1){
            break; // Exit the loop if -1 is entered
        }
        if(number % 2 == 0){
            evenCount++; // Increment even count
        } else {
            oddCount++; // Increment odd count
        }
    }
    cout << "Total even numbers: " << evenCount << endl;
    cout << "Total odd numbers: " << oddCount << endl;
    return 0;
}