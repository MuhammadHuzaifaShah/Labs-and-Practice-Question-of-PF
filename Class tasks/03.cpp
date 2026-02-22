#include<iostream>
using namespace std;
/*Design an algorithm that asks the user to enter two integers,
 and determines and displays the larger number.*/
 int main(){
    int num1,num2;
    cout<<"Enter the first integer: ";
    cin>>num1;
    cout<<"Enter the second integer: ";
    cin>>num2;
    if(num1>num2){
        cout<<"The larger number is: "<<num1<<endl;
    }
    else if(num2>num1){
        cout<<"The larger number is: "<<num2<<endl;
    }
    else{
        cout<<"Both numbers are equal."<<endl;
    }
    return 0;
 }