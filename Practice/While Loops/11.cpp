#include<iostream>
using namespace std;
/*Write a C++ program that prompts the user to enter a positive integer.
Use a while loop to print the multiplication table for that number up to 10.*/
 
int main()
{
    int num;
    cout<<"Enter a positive integer: ";
    cin>>num;
    int i=1;
    while(i<=10)
    {
        cout<<num<<" * "<<i<<" = "<<num*i<<endl;
        i++;
    }
    return 0;
}