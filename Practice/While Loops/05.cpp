#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
/*Write a C++ program that generates a random number between 1 and 20 and asks the user to guess it. 
Use a while loop to give the user multiple chances until they guess the correct number.*/
int main()
{
    srand(time(0));
    int randomNum=rand()%20+1;
    int guess;
    cout<<"Guess the number between 1 and 20: ";
    while(true)
    {
        cin>>guess;
        if(guess==randomNum)
        {
            cout<<"Congratulations! You guessed the correct number."<<endl;
            break;
        }
        else if(guess<randomNum)
            cout<<"Too low! Try again: ";
        else
            cout<<"Too high! Try again: ";
    }
    return 0;
}