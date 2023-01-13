#include <iostream>
using namespace std;
float rent(string,float);
main()
{
 int distance;
 string time;
 cout<<" Enter distance have to be covered in kilometers ";
 cin>>distance;
 cout<<" Enter time ";
 cin>>time;
 float payable;
 payable=rent(time,distance);
 cout<<" The lowest rent he has to pay for covering "<<distance<<" kilometers is "<<payable<<" Euros ";
}
float rent(string time,float distance)
{
 float rent;
 if (distance<20)
 {
  if (time=="Day")
   {
    rent=distance*0.90;
   }
  if (time=="Night")
   {
    rent=distance*0.79;
   }
 }
 if (distance>=20 && distance<100)
 {
  if (time=="Day")
   {
    rent=distance*0.09;
   }
  if (time=="Night")
   {
    rent=distance*0.09;
   }
 }
 if (distance>=100)
 {
  if (time=="Day")
   {
    rent=distance*0.06;
   }
  if (time=="Night")
   {
    rent=distance*0.06;
   }
 }
    return rent;
}