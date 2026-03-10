#include <iostream>
using namespace std;
/*Write a C++ program to determine eligibility for admission to a professional course based
on the following criteria: Go to the editor
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and 
Total in all three subject >=190 or Total in Maths and Physics >=140 
------------------------------------- Input the marks obtained in Physics :65 Input the marks
 obtained in Chemistry :51 Input the marks obtained in Mathematics :72 Total marks of Maths,
  Physics and Chemistry : 188 Total marks of Maths and Physics : 137 The candidate is not eligible.*/
int main()
{
    int phy, chem, math, total, math_phy;
    cout << "Enter marks in Physics: ";
    cin >> phy;
    cout << "Enter marks in Chemistry: ";
    cin >> chem;
    cout << "Enter marks in Mathematics: ";
    cin >> math;
    total = phy + chem + math;
    math_phy = phy + math;
    if (math >= 65 && phy >= 55 && chem >= 50 && total >= 190) {
        cout << "The candidate is eligible." << endl;
    } else if (math >= 65 && phy >= 55 && chem >= 50 && math_phy >= 140) {
        cout << "The candidate is eligible." << endl;
    } else {
        cout << "The candidate is not eligible." << endl;
    }
   return 0;
}