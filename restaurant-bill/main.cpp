//
// Haydin Davis
// 1/28
// Restaurant Bill Programming Project
// COSC 1030
//
#include<iostream>
using namespace std;

int main()
{
    // Variable declarations
  
    // Constants for the tax rate and tip percentage
    const float TAX=0.0675;
    const float TIP=0.15;
    // Get the amount of the purchase.
    double meal=88.67;
    
    // Calculate the sales tax.
    double tax=meal*TAX;
    // Calculate the tip.
    double subtotal= meal+tax;
    double tip=subtotal*TIP;
    // Calculate the total of the sale.
    double total=tip+subtotal;
    // Print information about the sale.
    cout<<"Meal cost: "<<meal<<endl;
    cout<<"Tax: "<<tax<<endl;
    cout<<"Tip: "<<tip<<endl;
    cout<<"Total: "<<total<<endl;
    return 0;
}
