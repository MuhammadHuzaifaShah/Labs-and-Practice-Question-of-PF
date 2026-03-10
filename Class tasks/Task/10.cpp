#include<iostream>
using namespace std;
// Program keeps asking number until user enters 7 output correct guess
int main(){
    int number;
    while(number != 7){
        cout << "Enter a number: ";
        cin >> number;
    }
    cout << "Congratulations! You guessed the correct number." << endl;
    return 0;
}