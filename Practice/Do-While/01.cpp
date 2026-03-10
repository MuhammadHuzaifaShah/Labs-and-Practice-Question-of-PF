#include <iostream>
using namespace std;
//Write a C++ program to print numbers from 1 to 10 and 10 to 1 using a do-while loop. 
int main()
{
    int i = 1;
    cout << "Numbers from 1 to 10: ";
    do
    {
        cout << i << " ";
        i++;
    } while(i <= 10);
    
    cout << "\nNumbers from 10 to 1: ";
    i = 10;
    do
    {
        cout << i << " ";
        i--;
    } while(i >= 1);
    
   return 0;
}