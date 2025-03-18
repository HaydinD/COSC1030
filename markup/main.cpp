//
// Haydin Davis
// 3/18
// Markup Programming Project
// COSC 1030
//
#include <iostream>
#include<iomanip>
using namespace std;

double calculateRetail(double,double);

int main() {
    double wholesale;
    double markupPercent;
    double retail;
    
    cout<<"Enter the items wholesale cost: ";
    cin>>wholesale;
    
    cout<<"Enter the items markup percent: ";
    cin>>markupPercent;
    
    retail= calculateRetail(wholesale,markupPercent);
    
    cout<<"The retail price is $"<<setprecision(2)
    <<fixed<<retail<<endl;
    
    return 0;
}

double calculateRetail(double wholesale,double markupPercent){
    double markup=wholesale*markupPercent/100;
    return wholesale+markup;
}

