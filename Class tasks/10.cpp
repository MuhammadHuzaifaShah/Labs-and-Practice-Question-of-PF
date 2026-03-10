#include<iostream>
using namespace std;
/*The colors red, blue, and yellow are known as the primary colors because they cannot be made by 
mixing other colors.When you mix two primary colors, you get a secondary color, as shown here:
When you mix red and blue, you get purple.
When you mix red and yellow, you get orange.
When you mix blue and yellow, you get green.
Design an algorithm that prompts the user to enter the names of two primary colors to mix.
 If the user enters anything other than "red," "blue," or "yellow," the algorithm should display an 
 error message. Otherwise, the algorithm should display the name of the secondary color that results.*/
 int main(){
    string color1, color2;
    cout<<"Enter the first primary color (red, blue, yellow): ";
    cin>>color1;
    cout<<"Enter the second primary color (red, blue, yellow): ";
    cin>>color2;

    if((color1=="red" && color2=="blue") || (color1=="blue" && color2=="red")){
        cout<<"The resulting secondary color is: purple."<<endl;
    }
    else if((color1=="red" && color2=="yellow") || (color1=="yellow" && color2=="red")){
        cout<<"The resulting secondary color is: orange."<<endl;
    }
    else if((color1=="blue" && color2=="yellow") || (color1=="yellow" && color2=="blue")){
        cout<<"The resulting secondary color is: green."<<endl;
    }
    else{
        cout<<"Please enter valid primary colors (red, blue, yellow)." << endl;
    }
    return 0;
 }