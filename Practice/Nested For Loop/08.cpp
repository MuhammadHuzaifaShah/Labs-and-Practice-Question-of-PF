#include <iostream>
using namespace std;
// simulate clock completely
int main()
{
    int hours, minutes, seconds;
    for(hours = 0; hours < 24; hours++){
        for(minutes = 0; minutes < 60; minutes++){
            for(seconds = 0; seconds < 60; seconds++){
                cout << hours << ":" << minutes << ":" << seconds << endl;
            }
        }
    }
   return 0;
}