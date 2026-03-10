#include <iostream>
using namespace std;
/*Take input number up to 999 and convert them into words*/ 
int main()
{
    int number;
    cout << "Enter a number (0-999): ";
    cin >> number;
    
    if(number == 0)
    {
        cout << "Zero" << endl;
        return 0;
    }
    
    string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    string teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    
    string result = "";
    
    if(number >= 100)
    {
        result += ones[number / 100] + " Hundred";
        number %= 100;
        if(number > 0)
            result += " ";
    }
    
    if(number >= 20)
    {
        result += tens[number / 10];
        if(number % 10 > 0)
            result += "-" + ones[number % 10];
    }
    else if(number >= 10)
    {
        result += teens[number - 10];
    }
    else
    {
        result += ones[number];
    }
    
    cout << result << endl;
   return 0;
}