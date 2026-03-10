#include <iostream>
using namespace std;
/*Write a C++ program to read the value of an integer m and display the value of n is
 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0.*/
int main()
{
   int m, n;
    cout << "Enter an integer: ";
    cin >> m;
    if (m > 0) {
        n = 1;
    } else if (m == 0) {
        n = 0;
    } else {
        n = -1;
    }
    cout << "The value of n is: " << n << endl; 
   return 0;
}