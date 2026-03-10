#include<iostream>
using namespace std;
/*Write a C++ program that calculates the product of numbers from 1 to 5 using a while loop.*/
int main()
{
    int product=1;
    int i=1;
    while(i<=5)
    {
        product=product*i;
        i++;
    }
    cout<<"Product of numbers from 1 to 5: "<<product<<endl;
    return 0;
}