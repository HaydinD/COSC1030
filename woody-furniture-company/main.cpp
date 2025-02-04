//
// Haydin Davis
// 2/4
// Woody Furniture Company Programming Project
// COSC 1030
//
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  const double AMERICAN_PRICE=85.00;
  const double MODERN_PRICE=57.50;
  const double FRENCH_PRICE=127.75;

  int american;
  int modern;
  int french;
  double total;

  cout<<"Enter the number of American Colonial chairs sold: ";
  cin>> american;
  cout<<"Enter the number of Modern chairs sold: ";
  cin>> modern;
  cout<<"Enter the number of French Classical chairs sold: ";
  cin>> french;

  total=(american*AMERICAN_PRICE)+
        (modern*MODERN_PRICE)+
        (french*FRENCH_PRICE);

    cout<<"The total revenue from American Colonial chair sales is $"
          <<setprecision(2)<<fixed<<(american*AMERICAN_PRICE)<<endl;
          
    cout<<"The total revenue from Modern chair sales is $"
          <<setprecision(2)<<fixed<<(modern*MODERN_PRICE)<<endl;
    
    cout<<"The total revenue from French Classical chair sales is $"
          <<setprecision(2)<<fixed<<(french*FRENCH_PRICE)<<endl;
    
    cout<<"The total revenue from chair sales is $"
          <<setprecision(2)<<fixed<<total<<endl;

  return 0;
}

