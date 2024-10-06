#include<iostream>
using namespace std;
float taxCalculator( char type , float price);
main()
{
 char type;
 cout<<"Enter the type code of the vehicle( M , E , S , V , T ) :";
 cin>>type;
 float price;
 cout<<"Enter the price of the vehicle :" << "$" ;
 cin>>price;
 double total_price ;
 total_price =taxCalculator( type , price); 
 cout<<"The final price of a vehicle of "<<type <<" adding the tax is $" <<total_price ;
 
}
float taxCalculator( char type , float price)
{
 double taxAmount ;
 float taxRate ;
 if ( type == 'M')
 {
  taxRate = 6 ;
 }
 if (type == 'E')
 {
  taxRate = 8 ;
 }
 if (type == 'S')
 {
  taxRate = 10 ;
 }
  if (type == 'V')
 {
  taxRate = 12 ;
 }
  if (type == 'T')
 {
  taxRate = 15 ;
 }
  taxAmount = price * (taxRate /100) ;
  return price + taxAmount ;
}
   