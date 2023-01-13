#include <iostream>
using namespace std;
string speed_prompt(int);
main()
{
  int speed;
  string message;
  cout<<" Enter Speed ";
  cin>>speed;
  message=speed_prompt(speed);
  cout<<message;
}
string speed_prompt(int speed)
{
 string message;
 if (speed<=10)
{
 message="Slow ";
}
else if (speed>10 && speed<=50)
{
 message="Average ";
}
else if (speed>50 && speed<=150)
{
 message="Fast ";
}
else if (speed>150 && speed<=1000)
{
 message="Ultra Fast ";
}
else 
{
 message="Extremely Fast ";
}
 return message ;
}

