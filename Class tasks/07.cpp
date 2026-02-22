#include<iostream>
using namespace std;
/*Design an algorithm that takes the marks obtained by a student in a course 
and determines whether the student was PASS or FAIL in the course.
 Assume that the passing marks are 50. Your algorithm should display an appropriate error message,
  if the marks entered by the user are negative or greater than 100.*/
  int main(){
    int marks;
    cout<<"Enter the marks obtained by the student: ";
    cin>>marks;
    if(marks<0 || marks>100){
        cout<<"Please enter valid marks between 0 and 100."<<endl;
    }
    else if(marks>=50){
        cout<<"The student has PASSed."<<endl;
    }
    else{
        cout<<"The student has FAILed."<<endl;
    }
    return 0;
  }