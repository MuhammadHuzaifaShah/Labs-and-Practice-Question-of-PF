#include <iostream>
using namespace std;
/*Write a C++ program that calculates the average of a set of numbers input by the user.
 The user should be able to input as many numbers as desired, and the program should continue
  until the user decides to stop.*/
int main()
{
    double sum = 0;
    int count = 0;
    double number;
    char choice;
    
    do
    {
        cout << "Enter a number: ";
        cin >> number;
        sum += number;
        count++;
        
        cout << "Do you want to enter another number? (y/n): ";
        cin >> choice;
    } while(choice == 'y' || choice == 'Y');
    
    if(count > 0)
    {
        double average = sum / count;
        cout << "The average is: " << average << endl;
    }
    else
    {
        cout << "No numbers were entered." << endl;
    }
   return 0;
}