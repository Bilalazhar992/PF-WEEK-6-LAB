#include <iostream>
using namespace std;
float income (string,int,int);
main()
{
    int rows;
    int columns;
    string screen_type;
    float revenue;
    cout<<"Enter no.rows: ";
    cin>>rows;
    cout<<"Enter no.columns: ";
    cin>>columns;
    cout<<"Enter screen type ";
    cin>>screen_type;
    revenue=income(screen_type,rows,columns);
    cout<<"Total revenue generated "<<revenue;
}
float income (string screen_type,int rows,int columns)
{   float revenue;
    if(screen_type=="Premium")
    {
      revenue=12*rows*columns;
    }
    else if(screen_type=="Normal")
    {
      revenue=7.5*rows*columns;
    }
    else if(screen_type=="Discount")
    {
      revenue=5*rows*columns;
    }
    return revenue;
}