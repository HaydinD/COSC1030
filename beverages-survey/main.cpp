//
// Haydin Davis
// 2/18
// Beverages Survey Programming Project
// COSC 1030
//
#include<iostream>
using namespace std;

int main()
{
    int coffee=0;
    int tea=0;
    int coke=0;
    int orange=0;
    int fav=0;
  
  
    while (fav!=-1)
    {
        int fav;
        cout<<"Out of the following which is your favorite?(enter the number):1.Coffee 2.Tea 3.Coke 4.Orange Juice ";
        cin>>fav;
        if (fav==1)
        {
            coffee+=1;
        }
        if (fav==2)
        {
            tea+=1;
        }
        if (fav==3)
        {
            coke+=1;
        }
        if (fav==4)
        {
            orange+=1;
        }
        if(fav==-1)
        {
            break;
        }
   	 }
    cout << endl << "The results are  " << coffee
		<< " votes for Coffee,  " << tea <<" votes for Tea, "
		<<coke<<" votes fro Coke, and "<<orange<<" votes for Orange Juice."<< endl;
	
		
    return 0;
}
