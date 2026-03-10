#include <iostream>
using namespace std;
/*In a class of 15 students got the grade of each student, and then count how many
students got A, B, C, and D grades.*/
int main()
{
    int a = 0, b = 0, c = 0, d = 0;
    char grade;
    for(int i = 1; i <= 15; i++){
        cout << "Enter the grade of student " << i << ": ";
        cin >> grade;
        switch(grade){
            case 'A':
                a++;
                break;
            case 'B':
                b++;
                break;
            case 'C':
                c++;
                break;
            case 'D':
                d++;
                break;
            default:
                cout << "Invalid grade. Please enter A, B, C, or D." << endl;               
        }
    }
    cout << "Number of students who got A grade: " << a << endl;
    cout << "Number of students who got B grade: " << b << endl;
    cout << "Number of students who got C grade: " << c << endl;
    cout << "Number of students who got D grade: " << d << endl;
   return 0;
}