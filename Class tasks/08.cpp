#include<iostream>
using namespace std;
/*Design an algorithm that asks the user to enter a 3-digit positive integer, 
and stores its reverse in another variable, and then, displays both integers on screen.*/
int main(){
    int num, reverseNum=0;
    cout<<"Enter a 3-digit positive integer: ";
    cin>>num;
    if(num>=100 && num<=999){
        reverseNum = (num%10)*100 + ((num/10)%10)*10 + (num/100);
        cout<<"The original number is: "<<num<<endl;
        cout<<"The reversed number is: "<<reverseNum<<endl;
    }
    else{
        cout<<"Please enter a valid 3-digit positive integer."<<endl;
    }
    return 0;
}