#include <iostream>
using namespace std;
/*Statement: Write a code for an ATM machine. 
1.	First, check if the PIN entered is correct. 
2.	If the PIN is correct, check if the Withdrawal Amount is less than or equal to the Account Balance. 
If yes, display "Withdrawal Successful." o 	If no, display "Insufficient Funds." 
If the PIN is incorrect, display "Invalid PIN." 
SAMPLE OUTPUT 1:
===== ATM MACHINE =====
Enter PIN: 1234
Enter Withdrawal Amount: 15000
Insufficient Funds.
SAMPLE OUTPUT 2:
===== ATM MACHINE =====
Enter PIN: 1234
Enter Withdrawal Amount: 2000
Withdrawal Successful.
*/ 
int main()
{
    int pin, withdrawalAmount;
    const int correctPin = 1234;
    const int accountBalance = 10000;
    
    cout << "===== ATM MACHINE =====" << endl;
    cout << "Enter PIN: ";
    cin >> pin;
    
    if (pin == correctPin)
    {
        cout << "Enter Withdrawal Amount: ";
        cin >> withdrawalAmount;
        
        if (withdrawalAmount <= accountBalance)
        {
            cout << "Withdrawal Successful." << endl;
        }
        else
        {
            cout << "Insufficient Funds." << endl;
        }
    }
    else
    {
        cout << "Invalid PIN." << endl;
    }
   return 0;
}