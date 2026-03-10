#include <iostream>
using namespace std;
/*Write a C++ program that prompts the user to input a series of integers
 until the user stops by entering 0 using a do-while loop.
 Calculate and print the sum of all positive integers entered*/ 
int main()
{
    int number;
    int sum = 0;
    
    do
    {
        cout << "Enter an integer (0 to stop): ";
        cin >> number;
        
        if(number > 0)
        {
            sum += number;
        }
    } while(number != 0);
    
    cout << "Sum of all positive integers entered: " << sum << endl;
   return 0;
}