//
// Haydin Davis
// 2/18
// Calories Burned Programming Project
// COSC 1030
//
#include<iostream>
using namespace std;

int main()
{
    const double CALS_PER_MIN=3.9;
    
    int minutes;
    double calories;
    
    for(minutes=10; minutes<=30; minutes+=5)
    {
        calories=minutes*CALS_PER_MIN;
        cout<<"After "<<minutes<<" minutes you burned "
        <<calories<<" calories.\n";
    }
		
    return 0;
}

