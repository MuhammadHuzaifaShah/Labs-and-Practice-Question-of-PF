#include<iostream>
using namespace std;
/*Write a C++ program that prompts the user to enter a positive integer. 
It then calculates and prints the factorial of that number using a while loop.*/
int main()
{
    int num;
    cout<<"Enter a positive integer: ";
    cin>>num;
    if(num<0)
    {
        cout<<"Factorial is not defined for negative numbers."<<endl;
        return 0;
    }
    unsigned long long factorial=1;
    int i=1;
    while(i<=num)
    {
        factorial*=i;
        i++;
    }
    cout<<"Factorial of "<<num<<" is "<<factorial<<endl;
    return 0;
}