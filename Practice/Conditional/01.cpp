#include <iostream>
using namespace std;
// program which comparetwo value are equal or nor
int main()
{
   int a, b;
   cout << "Enter 1st numbers: ";
   cin >> a ;
   cout << "Enter 2nd numbers: ";
   cin >> b;
   if (a == b)
      cout << "The numbers are equal." << endl;
   else
      cout << "The numbers are not equal." << endl;
   return 0;
}