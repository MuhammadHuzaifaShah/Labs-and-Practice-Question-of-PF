#include <iostream>
using namespace std;
/*ATM Menu Simulation
Create ATM menu:
1. Deposit
2. Withdraw
3. Check Balance
4. Exit
Program repeats until Exit.
(Assume initial balance = 10000)
use do-while loop*/ 
int main()
{
    int choice;
    float balance = 10000;
    do
    {
        cout << "\nATM Menu:" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                float depositAmount;
                cout << "Enter amount to deposit: ";
                cin >> depositAmount;
                balance += depositAmount;
                break;

            case 2:
                float withdrawAmount;
                cout << "Enter amount to withdraw: ";
                cin >> withdrawAmount;
                if(withdrawAmount <= balance)
                {
                    balance -= withdrawAmount;
                    cout << "Withdrawal successful." << endl;
                }
                else
                {
                    cout << "Insufficient balance." << endl;
                }
                break;

            case 3:
                cout << "Your current balance is: $" << balance << endl;
                break;

            case 4:
                cout << "Thank you for using our ATM." << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while(choice != 4);
   return 0;
}