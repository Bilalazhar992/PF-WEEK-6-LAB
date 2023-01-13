#include <iostream>
using namespace std;
bool decider(int,int,int);
main()
{
 int num1;
 int num2;
 int num3;
 bool result;
 cout<<" Enter three numbers: ";
 cin>>num1>>num2>>num3;
 result=decider(num1,num2,num3);
 if (result==true)
 {
  string yes;
  yes="Yes";
  cout<<"Three numbers are equal to each other? "<<yes;
 }
 if(result==false)
 {
  string no;
  no="No";
  cout<<"Three numbers are equal to each other? "<<no;
  }
}
bool decider(int num1,int num2,int num3)
{
 bool result;
 if(num1==num2 && num1==num3)
{
  result=true;
}
else
{
 result=false;
}
   return result;
}










 