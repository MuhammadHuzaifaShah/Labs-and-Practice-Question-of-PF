#include<iostream>
using namespace std;
int main(){
    int num,smallest,count=0;
    while(count<5){
        cout << "Enter a number: ";
        cin >> num;
        if(count == 0){
            smallest = num;
        } else {
            if(num < smallest){
                smallest = num;
            }
        }
        count++;
    }
    cout << "The smallest number is: " << smallest << endl;
}