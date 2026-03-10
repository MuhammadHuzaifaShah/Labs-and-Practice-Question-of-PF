#include<iostream>
using namespace std;
/*In a right triangle, the square of the length of one side is equal to the sum
 of the squares of the lengths of the other two sides. Design an algorithm that
  prompts the user to enter the lengths of three sides of a triangle and then 
  displays a message indicating whether the triangle is a right triangle or not.*/
  int main(){
    double a,b,c;
    cout<<"Enter the lengths of the first side of the triangle: ";
    cin>>a;
    cout<<"Enter the lengths of the second side of the triangle: ";
    cin>>b;
    cout<<"Enter the lengths of the third side of the triangle: ";
    cin>>c;
    if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
        cout<<"The triangle is a right triangle."<<endl;
    }
    else{
        cout<<"The triangle is not a right triangle."<<endl;
    }
    return 0;
  }