#include<iostream>
using namespace std;
/*Design an algorithm that asks the user to enter an integer,
 and determines whether the integer is Even or Odd.*/
 int main(){
    int num;
    cout<<"Enter an integer: ";
    cin>>num;
    if(num%2==0){
        cout<<"The number is Even."<<endl;
    }
    else{
        cout<<"The number is Odd."<<endl;
    }
    return 0;
 }