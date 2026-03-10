#include<iostream>
using namespace std;
//multiplication table of a number like 5*1=5, 5*2=10, 5*3=15 and so on
int main(){
    int num;
    int i=1;
    cout<<"Enter a number: ";
    cin>>num;
    while(i<=10){
        cout<<num<<"*"<<i<<"="<<num*i<<endl;
        i++;
    }
    return 0;
}