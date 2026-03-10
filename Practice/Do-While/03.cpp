#include <iostream>
using namespace std;
//Write a C++ program that calculates the sum of even and odd numbers from 1 to 50 using do-while loops. 
int main()
{
    int i = 1;
    int evenSum = 0;
    int oddSum = 0;
    
    do
    {
        if(i % 2 == 0)
        {
            evenSum += i;
        }
        else
        {
            oddSum += i;
        }
        i++;
    } while(i <= 50);
    
    cout << "Sum of even numbers from 1 to 50: " << evenSum << endl;
    cout << "Sum of odd numbers from 1 to 50: " << oddSum << endl;
    
   return 0;
}