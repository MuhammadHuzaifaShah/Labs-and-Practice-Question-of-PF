#include <iostream>
using namespace std;
//Write a C++ program to calculate profit and loss on a transaction. 
int main()
{
    double costPrice, sellingPrice;
    cout << "Enter the cost price: ";
    cin >> costPrice;
    cout << "Enter the selling price: ";
    cin >> sellingPrice;
    if (sellingPrice > costPrice) {
        double profit = sellingPrice - costPrice;
        cout << "Profit = " << profit << endl;
    } else if (costPrice > sellingPrice) {
        double loss = costPrice - sellingPrice;
        cout << "Loss = " << loss << endl;
    } else {
        cout << "No profit, no loss." << endl;
    }
   return 0;
}