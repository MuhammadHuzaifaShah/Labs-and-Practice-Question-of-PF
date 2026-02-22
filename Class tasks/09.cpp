#include<iostream>
using namespace std;
/*Design an algorithm that asks the user to enter three integers, 
and determines and displays the largest number.*/
int main(){
    int num1,num2,num3;
    cout<<"Enter the first integer: ";
    cin>>num1;
    cout<<"Enter the second integer: ";
    cin>>num2;
    cout<<"Enter the third integer: ";
    cin>>num3;
    if(num1>num2 && num1>num3){
        cout<<"The largest number is: "<<num1<<endl;
    }
    else if(num2>num1 && num2>num3){
        cout<<"The largest number is: "<<num2<<endl;
    }
    else if(num3>num1 && num3>num2){
        cout<<"The largest number is: "<<num3<<endl;
    }
    else{
        cout<<"There are multiple largest numbers."<<endl;
    }
    return 0;
}