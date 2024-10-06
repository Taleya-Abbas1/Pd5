#include<iostream>
#include<cmath>
using namespace std;
float take(float length , float width , float height , string unit);
main()
{
  int length , width , height ;
  string unit;
  float output;
  cout<<"Enter the length of pyramid in meters:";
  cin>>length;
  cout<<"Enter the width of pyramid in meters:";
  cin>>width;
  cout<<"Enter the height of pyramid in meters:";
  cin>>height;
  cout<<"Enter the desired output(millimeters , cetimeters , meters , kilometers):";
  cin>>unit;
  output = take(length , width , height , unit);
  cout<<"The volume of the pyramid is:" <<output <<"  cubic meters" ; 
}
float take(float length , float width , float height , string unit)
{
  double pyramidVolume ;
  if( unit == "meters")
  {
   pyramidVolume = length * width * height/3 ;
  
  }
  if(unit == "centimeters" )
  {
    pyramidVolume = (length * width * height * 1000000)/3 ;
   
  }
  if(unit == "millimeters" )
  {
    pyramidVolume = (length * width * height * 1000000000) /3 ;
    
  }
  if (unit == "kilometers" )
  {
    pyramidVolume = (length * width * height )/(3000000000) ;
   
  }
  
  return pyramidVolume ;
}