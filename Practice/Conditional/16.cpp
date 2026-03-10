#include <iostream>
using namespace std;
//Write a C++ program to check whether a character is an alphabet, digit or special character. 
int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        cout << "The character is an alphabet." << endl;
    } else if (ch >= '0' && ch <= '9') {
        cout << "The character is a digit." << endl;
    } else {
        cout << "The character is a special character." << endl;
    }
   return 0;
}