#include <iostream>
using namespace std;
/*Write a C++ program to accept the height of a person in centimeters and 
categorize the person according to their height.*/
int main()
{
    int height;
    cout << "Enter height in centimeters: ";
    cin >> height;
    if(height < 150){
        cout << "The person is short.";
    }
    else if(height >= 150 && height < 170){
        cout << "The person is average height.";
    }
    else{
        cout << "The person is tall.";
    }
   return 0;
}