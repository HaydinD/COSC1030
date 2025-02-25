//
// Haydin Davis
// 2/25
// Change for a Dollar Game Programming Project
// COSC 1030
//
#include<iostream>
using namespace std;

int main()
{
    const double PENNIE=0.01;
    const double NICKEL=0.05;
    const double DIME=0.10;
    const double QUARTER=0.25;
    
    float pen=0;
    float nick=0;
    float dim=0;
    float quart=0;
    float mon=0;
    
     while (mon!=1)
    {
        int pen;
        cout<<"Enter an amount of pennies: ";
        cin>>pen ;
        int nick;
        cout<<"Enter an amount of nickels: ";
        cin>>nick ;
        int dim;
        cout<<"Enter an amount of dimes: ";
        cin>>dim ;
        int quart;
        cout<<"Enter an amount of quarters: ";
        cin>>quart ;
        
        if (pen>=1)
        {
            mon+=pen*PENNIE;
        }
        if (nick>=1)
        {
            mon+=nick*NICKEL;
        }
        if (dim>=1)
        {
            mon+=dim*DIME;
        }
        if (quart>=1)
        {
            mon+=quart*QUARTER;
        }
        if(mon==1)
        {
            cout << endl << "Yes,  " << pen
		    << " pennies,  " << nick <<" nickels, "
		    <<dim<<" dimes, and "<<quart<<" quarters equal 1 dollar."<< endl;  
            break;
        }else{
            cout<<"You have "<<mon<<" dollars, not 1. Try again.";
            mon-=mon;
        }
   	 }
    
    
		
    return 0;
}


