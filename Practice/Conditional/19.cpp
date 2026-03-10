#include <iostream>
using namespace std;
/*Write a program in C to calculate and print the electricity bill of a given customer.
 The customer ID, name, and unit consumed by the user should be captured from the keyboard
  to display the total amount to be paid to the customer.*/
int main()
{
    int customerId;
    string customerName;
    int unitsConsumed;
    double amountCharged, surcharge, netAmount;

    cout << "Enter Customer ID: ";
    cin >> customerId;
    cout << "Enter Customer Name: ";
    cin >> customerName;
    cout << "Enter Units Consumed: ";
    cin >> unitsConsumed;

    if (unitsConsumed < 200) {
        amountCharged = unitsConsumed * 1.20;
    } else if (unitsConsumed < 400) {
        amountCharged = unitsConsumed * 1.50;
    } else if (unitsConsumed < 600) {
        amountCharged = unitsConsumed * 1.80;
    } else {
        amountCharged = unitsConsumed * 2.00;
    }

    if (amountCharged > 400) {
        surcharge = amountCharged * 0.15; // Surcharge of 15%
        netAmount = amountCharged + surcharge;
    } else {
        netAmount = amountCharged;
    }

    if (netAmount < 100) {
        netAmount = 100; // Minimum bill is Rs. 100
    }

    cout << "Customer ID NO : " << customerId << endl;
    cout << "Customer Name : " << customerName << endl;
    cout << "unit Consumed : " << unitsConsumed << endl;
    cout << "Amount Charges @Rs. " << (amountCharged / unitsConsumed) << " per unit : " << amountCharged << endl;
    cout << "Surchage Amount : " << surcharge << endl;
    cout << "Net Amount Paid By the Customer : " << netAmount << endl;

   return 0;
}