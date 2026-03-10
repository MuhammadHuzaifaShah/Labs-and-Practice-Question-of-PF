#include<iostream>
using namespace std;
/*Write a C++ program that calculates and prints the sum of cubes of
even numbers up to a specified limit (e.g., 20) using a while loop*/
int main()
{
    int limit;
    cout<<"Enter the limit: ";
    cin>>limit;
    int sum=0;
    int i=0;
    while(i<=limit)
    {
        if(i%2==0)
            sum+=i*i*i;
        i++;
    }
    cout<<"Sum of cubes of even numbers up to "<<limit<<" is "<<sum<<endl;
    return 0;
}