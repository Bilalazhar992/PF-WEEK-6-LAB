#include <iostream>
using namespace std;
string checkTitle(int,char);
main()
{
    int age;
    char gender;
    string identity;
    cout<<"Enter age";
    cin>>age;
    cout<<"Enter gender";
    cin>>gender;
    identity=checkTitle(age,gender);
    cout<<identity;
}
string checkTitle(int age,char gender)
{ 
    string identity;
    if(age>=16 && gender=='m')
    {
      identity="Mr.";
    }
    else if(age<16 && gender=='m')
    {
      identity="Master";
    }
    else if(age>=16 && gender=='f')
    {
      identity= "Ms.";
    }
    else if(age<16 && gender=='f')
    {
      identity= "Miss";
    }
    return identity;
}