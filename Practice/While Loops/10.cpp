#include<iostream>
using namespace std;
//Write a C++ program to find and print the first 10 Fibonacci numbers using a while loop.
int main()
{
    int n1=0, n2=1, n3, count;
    cout<<"Enter the number of Fibonacci numbers to print: ";
    cin>>count;
    cout<<"First "<<count<<" Fibonacci numbers: ";
    int i=1;
    while(i<=count)
    {
        cout<<n1<< " ";
        n3=n1+n2;
        n1=n2;
        n2=n3;
        i++;
    }
    cout<<endl;
    return 0;
}