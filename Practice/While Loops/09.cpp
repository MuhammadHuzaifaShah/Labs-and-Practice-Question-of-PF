#include<iostream>
using namespace std;
/*Write a C++ program that implements a program to check if a given number 
is a palindrome using a while loop.*/
int main()
{
    int num, originalNum, reversedNum=0, remainder;
    cout<<"Enter a number: ";
    cin>>num;
    originalNum=num;
    while(num!=0)
    {
        remainder=num%10;
        reversedNum=reversedNum*10+remainder;
        num/=10;
    }
    if(originalNum==reversedNum)
        cout<<originalNum<<" is a palindrome."<<endl;
    else
        cout<<originalNum<<" is not a palindrome."<<endl;
    return 0;
}