//
// Haydin Davis
// 2/11
// University of Guiness Programming Project
// COSC 1030
//
#include<iostream>
using namespace std;

int main()
{
  const double IN_STATE=3000.0;
  const double OUT_STATE=4500.0;
  const double IN_ROOM=2500.0;
  const double OUT_ROOM=3500.0;
  
  int cost=0;
  
  int residents;
  cout<<"Are you from in-state(1=Yes, 0=No): ";
  cin>>residents;
  
  int rooms;
  cout<<"Do you require room and board(1=Yes, 0=No): ";
  cin>>rooms;
  
    if (residents==1)
    {
      cost+=IN_STATE;
      cout<<"Your tuition will be "<<IN_STATE;
    
        if (rooms==1)
        {
            cost+=IN_ROOM;
            cout<<" dollars, your room costs "<<IN_ROOM;
        }
        cout<<" dollars, and your total cost will be "<<cost
        <<" dollars.";
    }
    if (residents==0)
    {
        cost+=OUT_STATE;
        cout<<"Your tuition will be "<<OUT_STATE;
    
        if (rooms==1)
        {
            cost+=OUT_ROOM;
            cout<<" dollars, your room costs "<<OUT_ROOM;
        }
          cout<<" dollars, and your total cost will be "<<cost
          <<" dollars.";
    }

        

    return 0;
}
