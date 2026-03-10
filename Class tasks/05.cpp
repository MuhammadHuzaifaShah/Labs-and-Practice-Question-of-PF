#include<iostream>
using namespace std;
/*Design an algorithm which asks the user to enter a 3-digit positive integer.
 Then, the algorithm should calculate and display the sum of the digits of that integer.
 For example, if the user enters 786, then your algorithm should display 21 on screen.*/
    int main(){
        int num, sum=0;
        cout<<"Enter a 3-digit positive integer: ";
        cin>>num;
        if(num>=100 && num<=999){
            sum = (num/100) + ((num/10)%10) + (num%10);
            cout<<"The sum of the digits is: "<<sum<<endl;
        }
        else{
            cout<<"Please enter a valid 3-digit positive integer."<<endl;
        }
        return 0;
    }