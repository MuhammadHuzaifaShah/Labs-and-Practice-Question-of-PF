#include<iostream>
using namespace std;
/*Allow user 3 attempts to enter correct password (1234).
If correct → “Access granted”
Else → “Blocked”*/
int main(){
    const int correctPassword = 1234;
    int password, attempts = 0;
    bool accessGranted = false;

    while(attempts < 3){
        cout << "Enter password: ";
        cin >> password;
        if(password == correctPassword){
            accessGranted = true;
            break; // Exit the loop if the password is correct
        }
        attempts++;
    }

    if(accessGranted){
        cout << "Access granted" << endl;
    } else {
        cout << "Blocked" << endl;
    }

    return 0;
}        