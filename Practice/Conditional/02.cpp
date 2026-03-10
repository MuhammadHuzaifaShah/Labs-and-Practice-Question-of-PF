#include <iostream>
using namespace std;
// check number is even or odd
int main()
{
    int num;
    cout <<"Enter a number: ";
    cin >> num;
        if(num%2==0){
            cout << "Number is even" <<endl;
        }
        else if(num%2!=0){
            cout <<"Number is odd" <<endl;
        }
        else{
            cout <<"Number should be a positive integer" <<endl;
        }
   return 0;
}