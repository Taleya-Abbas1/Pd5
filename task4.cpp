#include<iostream>
#include<string>
#include<cmath>
using namespace std;
string projectTimeCalculation(int hours , int days , int workers);
main()
{
  float hours , days , workers ;
 string output;
 cout<<"Enter the number of hours needed :" ;
 cin>>hours;
 cout<<"Enter the number of days that firm has :";
 cin>>days;
 cout<<"Enter the number of workers:";
 cin>>workers;
 output =projectTimeCalculation( hours , days , workers);
 cout<<output ;

}
string projectTimeCalculation(intt hours , int days , int workers)
{
   float trainingDays = days * (10/100) ;
   float remainingDays = days - trainingDays;
   float workingHours = remainingDays * workers * 10 ;
   if ( workingHours > hours)
   {
     int extraHours = totalAvailableHours - workingHours ;
     string result = "Yes !" +to_string(extraHours)+  "hours needed. ";
     return result ;
   }
   if (totalAvailableHours < workingHours)
   {
     int additionalHours = workingHours - totalAvailableHours  ;
     string Result = "Not enough time!" +to_string(additionalHours)+ "left ";
     return Result ;
   }
}
 

