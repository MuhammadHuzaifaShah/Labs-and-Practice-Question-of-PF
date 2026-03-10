#include<iostream>
using namespace std;
/*Write a C++ program that prompts the user to input a series of integers until
 the user stops entering 0 using a while loop. Calculate and print the sum of 
 all the positive integers entered*/
int main()
{
    int sum=0;
    int num;
    cout<<"Enter integers (0 to stop): ";
    while(true)
    {
        cin>>num;
        if(num==0)
            break;
        if(num>0)
            sum+=num;
    }
    cout<<"Sum of positive integers: "<<sum<<endl;
    return 0;
}