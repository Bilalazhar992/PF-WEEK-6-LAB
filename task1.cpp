#include <iostream>
using namespace std;
bool decision(string,string);
main()
{
    string letter1;
    string letter2;
    bool comparison;
    cout<<" Enter first string: ";
    cin>>letter1;
    cout<<" Enter second string: ";
    cin>>letter2;
    comparison=decision(letter1,letter2);
    if(comparison==true)
    {
        string yes;
        yes="Yes";
        cout<<"Two letters are equal to each other? "<<yes;
    }
    if(comparison==false)
    {
        string no;
        no="No";
        cout<<"Two letters are equal to each other? "<<no;
    }
}
bool decision(string letter1 ,string letter2)
{  
     bool comparison;
     if(letter1==letter2 )
     {
        comparison=true;
     }
     else
     {
        comparison=false;
     }
     return comparison;
}