#include <iostream>
using namespace std;
int main()
{
    int age;
    cout <<"Enter your age: ";
    cin >> age;
    if(age>18){
        cout<<"You're Eligible to cast vote";
    }
    else{
        cout <<"You're not Eligible to cast vote";
    }
   return 0;
}