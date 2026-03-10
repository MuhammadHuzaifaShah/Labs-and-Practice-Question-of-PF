#include <iostream>
using namespace std;
//Write a C++ program to check whether an alphabet is a vowel or a consonant. 
int main()
{
    char ch;
    cout << "Enter an alphabet: ";
    cin >> ch;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        cout << "The alphabet is a vowel." << endl;
    } else {
        cout << "The alphabet is a consonant." << endl;
    }
   return 0;
}