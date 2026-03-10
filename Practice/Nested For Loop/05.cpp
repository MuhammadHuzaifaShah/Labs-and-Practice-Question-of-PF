#include <iostream>
using namespace std;
// prime number in a range
int main()
{
    int  end;
    cout << "Enter the end of the range: ";
    cin >> end;

    for(int i = 1; i <= end; i++){
        if(i > 1){
            bool isPrime = true;
            for(int j = 2; j <= i/2; j++){
                if(i % j == 0){
                    isPrime = false;
                    break;
                }
            }
            if(isPrime){
                cout << i << " ";
            }
        }
    }
   return 0;
}