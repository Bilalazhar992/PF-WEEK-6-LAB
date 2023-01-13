#include <iostream>
#include <cmath>
using namespace std;
main()
{
    string year_type;
    int h;
    int holidays;
    int weekends;
    int weekends_sofia;
    weekends=48;
    float play_days;
    cout<<" Enter number of weeks when nadeem went to his home in one year: ";
    cin>>h;
    cout<<" Enter number of holidays: ";
    cin>>holidays;
    cout<<" Enter year type Either leap or normal: ";
    cin>>year_type;
    weekends_sofia=weekends-h;
    play_days=(weekends_sofia*0.75)+h+(holidays*0.6);
    if(year_type=="leap")
    {
        play_days=0.15*play_days+play_days;
        play_days=floor(play_days);
        cout<<"Days on which nadeem play vollyball  in a year are "<<play_days;
    }
    else
    {
        play_days=floor(play_days);
        cout<<"Days on which nadeem play vollyball in a year are "<<play_days;
    }
}