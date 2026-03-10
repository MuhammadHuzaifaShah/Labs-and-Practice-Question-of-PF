#include<iostream>
using namespace std;
/*Write a C++ program that prompts the user to input a username.Use a while loop to 
 keep asking for a username until a valid one is entered (e.g., at least 8 characters long).*/
 int main()
 {
    string username;
    cout<<"Enter a username (at least 8 characters long): ";
    while(true)
    {
        cin>>username;
        if(username.length()>=8)
        {
            cout<<"Username accepted."<<endl;
            break;
        }
        else
            cout<<"Invalid username. Please try again: ";
    }
    return 0;
 }