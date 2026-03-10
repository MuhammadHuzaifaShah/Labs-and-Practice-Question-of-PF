#include<iostream>
using namespace std;
/*Write a C++ program that prompts the user to input a series of numbers
 until they input a duplicate number. Use a while loop to check for duplicates.*/
 int main(){   
    int num;
    cout<<"Enter numbers (duplicate to stop): ";
    while(true)
    {
        cin>>num;
        static int arr[100];
        static int count=0;
        bool isDuplicate=false;
        for(int i=0;i<count;i++)
        {
            if(arr[i]==num)
            {
                isDuplicate=true;
                break;
            }
        }
        if(isDuplicate)
            break;
        arr[count++]=num;
    }
    return 0;
 }