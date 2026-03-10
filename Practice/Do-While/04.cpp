#include <iostream>
using namespace std;
/*Write a C++ program that prompts the user to enter a series of numbers until they input
 a negative number.Calculate and print the sum of all entered numbers using a do-while loop.*/ 
int main()
{
    int number;
    int sum = 0;
    
    do
    {
        cout << "Enter a number (negative number to stop): ";
        cin >> number;
        
        if(number >= 0)
        {
            sum += number;
        }
    } while(number >= 0);
    
    cout << "Sum of all entered numbers: " << sum << endl;
   return 0;
}