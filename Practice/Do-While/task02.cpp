#include <iostream>
using namespace std;
/*Guess the Number Game
• System assumes secret number = 7
• User keeps guessing
• Loop stops when correct guess entered
• Display number of attempts*/ 
int main()
{
    int secretNumber = 7;
    int guess;
    int attempts = 0;
    
    do
    {
        cout << "Guess the number (1-10): ";
        cin >> guess;
        attempts++;
        
        if(guess == secretNumber)
        {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
        }
        else if(guess > secretNumber)
        {
            cout << "Too high. Try again." << endl;
        }
        else
        {
            cout << "Too low. Try again." << endl;
        }
    } while(guess != secretNumber);
    
   return 0;
}