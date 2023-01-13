#include <iostream>
using namespace std;
float money (string,string,int);
main()
{
    string item;
    string city;
    int quantity;
    float price;
    cout<<" Enter city ";
    cin>>city;
    cout<<" Enter item ";
    cin>>item;
    cout<<" Enter quantity ";
    cin>>quantity;
    price=money(city,item,quantity);
    cout<<" Price of "<<quantity<<" "<<item<<" is "<<price<<" in "<<city<<" is "<<price<<" euros ";
}
float money (string city,string item,int quantity)
{
    float price;
    if (city=="lahore")
    {
        if(item=="coffee")
        {
            price=quantity*0.50;
        }
        else if (item=="water")
        {
           price=quantity*0.80; 
        }
        else if (item=="beer")
        {
           price=quantity*1.20; 
        }
        else if (item=="sweets")
        {
           price=quantity*1.45; 
        }
        else 
        {
           price=quantity*1.60; 
        }

    }
    if(city=="karachi")
    {
        if(item=="coffee")
        {
            price=quantity*0.40;
        }
        else if (item=="water")
        {
           price=quantity*0.70; 
        }
        else if (item=="beer")
        {
           price=quantity*1.15; 
        }
        else if (item=="sweets")
        {
           price=quantity*1.30; 
        }
        else 
        {
           price=quantity*1.50; 
        }
    }  
    if(city=="pindi")
    {
        if(item=="coffee")
        {
            price=quantity*0.45;
        }
        else if (item=="water")
        {
           price=quantity*0.70; 
        }
        else if (item=="beer")
        {
           price=quantity*1.10; 
        }
        else if (item=="sweets")
        {
           price=quantity*1.35; 
        }
        else 
        {
           price=quantity*1.50; 
        }

    } 
        return price;
}                     
        