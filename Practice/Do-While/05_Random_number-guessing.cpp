#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
/*Write a C++ program that generates a random number between 1 and 100 and asks
 the user to guess it. Use a do-while loop to give the user multiple chances until
  they guess the correct number.*/
int main()
{
    srand(time(0)); // Seed the random number generator
    int secretNumber = rand() % 100 + 1; // Generate a random number between 1 and 100
    int guess;
    
    cout << "Welcome to the Guess the Number Game!" << endl;
    cout << "I have selected a number between 1 and 100. Can you guess it?" << endl;
    
    do
    {
        cout << "Enter your guess: ";
        cin >> guess;
        
        if(guess < secretNumber)
        {
            cout << "Too low. Try again." << endl;
        }
        else if(guess > secretNumber)
        {
            cout << "Too high. Try again." << endl;
        }
        else
        {
            cout << "Congratulations! You guessed the number!" << endl;
        }
    } while(guess != secretNumber);
   return 0;
}