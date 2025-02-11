//
// Haydin Davis
// 2/11
// Time Calculator Programming Project
// COSC 1030
//

#include<iostream>
using namespace std;

int main()
{
  const double SECONDS_PER_MINUTE=60.0;
  const double SECONDS_PER_HOUR=3600.0;
  const double SECONDS_PER_DAY=86400.0;

  int seconds;
  
  cout<<"Enter a number of seconds: ";
  cin>>seconds;
  
  if (seconds>=SECONDS_PER_MINUTE)
    {
      double minutes=seconds/SECONDS_PER_MINUTE;
      cout<<"There are "<<minutes
      <<" minutes in "<<seconds
      <<" seconds./n";
    }
        
    if (seconds>=SECONDS_PER_HOUR)
    {
      double hours=seconds/SECONDS_PER_HOUR;
      cout<<"There are "<<hours
      <<" hours in "<<seconds
      <<" seconds./n";
    }
    
    if (seconds>=SECONDS_PER_DAY)
    {
      double days=seconds/SECONDS_PER_DAY;
      cout<<"There are "<<days
      <<" days in "<<seconds
      <<" seconds./n";
    }
    
    return 0;
}
