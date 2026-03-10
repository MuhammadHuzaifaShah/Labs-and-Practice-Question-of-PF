#include<iostream>
using namespace std;
//Write a C++ program to print numbers from 0 to 10 and 10 to 0 using two while loops
int main()
{
    int i=0;
    while(i<=10)
    {
        cout<<i<< endl;
        i++;
    }
    cout<<endl;
    int j=10;
    while(j>=0)
    {
        cout<<j<< endl;
        j--;
    }
    return 0;
}