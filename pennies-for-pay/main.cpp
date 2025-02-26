//
// Haydin Davis
// 2/26
// Pennies for Pay Programming Project
// COSC 1030
//
#include<iostream>
using namespace std;

int main()
{
    int mult=1;
    int i=1;
    float total=0;
    float salary=0.01;
    int days;
    cout<<"How many days have you worked: ";
    cin>>days ;
    if(days>=1){
        while(i<=days){
           cout<<mult<<"*"<<salary<<"= $"<<mult*salary<<endl;
           total+=mult*salary;
           i+=1;
           mult*=2;
        }
        cout<<"You worked "<<days<<" days for a total of "<<total<<" dollars."<<endl;
    }
            
		
    return 0;
}
