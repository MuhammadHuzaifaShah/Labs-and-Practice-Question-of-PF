#include<iostream>
using namespace std;
//pesuodo pattern
int main(){
    int i=1;
    int j;
    while(i<=5){
        j=1;
        while (j<=i){
            cout << "*";
            j++;
        }
       cout << endl;
        i++;     
    }
    return 0;
}