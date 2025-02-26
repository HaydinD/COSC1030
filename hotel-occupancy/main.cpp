//
// Haydin Davis
// 2/26
// Hotel Occupancy Programming Project
// COSC 1030
//
#include<iostream>
using namespace std;

int main()
{
    int good=0;
    int rooms=0;
    int room=0;
    int full=0;
    int layer;
    cout<<"Enter the amount of floors you have: ";
    cin>>layer ;
    if(layer>=1){
        for (int i=1;i<=layer;i++){
            int room;
            cout<<"Enter the amount of rooms you have on floor "<<i<<": ";
            cin>>room ;
            rooms+=room;
            if(room>=10){
                int took;
                cout<<"How many rooms are occupied on floor "<<i<<": ";
                cin>>took ;
                full+=took;
            }else{
            cout<<"That is not enough rooms.";
            good+=1;
            break;
            }
        }
    }else{
        cout<<"That is not enough floors.";
        good+=1;
    }
    if(good>=1){
        cout<<"Try again.";
    }else{
        int open=rooms-full;
        cout << endl << "You have  " << layer
        << " floors, and a total of " << rooms <<" rooms, "
    	<<full<<" of which are occupied, and "<<open<<" avalible."<< endl;  
        }
		
    return 0;
}


