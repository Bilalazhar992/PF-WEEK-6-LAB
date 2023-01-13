#include <iostream>
using namespace std;
float money(int,float,string);
main()
{
    int members;
    float budget;
    float result;
    string travel_class;
    cout<<" Enter budget: ";
    cin>>budget;
    cout<<" Enter members: ";
    cin>>members;
    cout<<" Enter travel class ";
    cin>>travel_class;
    result=money(members,budget,travel_class);
    if(result>0)
    {
        cout<<" Yes! You have "<<result<<" QR left";
    }
    if(result<0)
    {
        cout<<" Not enough money "<<-(result)<<" QR more needed";
    }
}
float money(int members,float budget,string travel_class)
{   
    float remaining_budget;
    float consumed;
    float ticket_money;
    float result;
    if(travel_class=="VIP")
    {
        if(members>=1 && members<=4 )
        {
          consumed=budget*0.75;
          ticket_money=members*499.99;
	  remaining_budget=budget-consumed;
          result=remaining_budget-ticket_money;
        }
        else if(members>=5 && members<=9 )
        {
          consumed=budget*0.60;
          ticket_money=members*499.99;
	  remaining_budget=budget-consumed;
          result=remaining_budget-ticket_money;
        }
        else if(members>=10 && members<=24 )
        {
          consumed=budget*0.50;
          ticket_money=members*499.99;
	  remaining_budget=budget-consumed;
          result=remaining_budget-ticket_money;
        }
        else if(members>=25 && members<=49 )
        {
          consumed=budget*0.40;
          ticket_money=members*499.99;
	  remaining_budget=budget-consumed;
          result=remaining_budget-ticket_money;
        }
        else 
        {
          consumed=budget*0.25;
          ticket_money=members*499.99;
	  remaining_budget=budget-consumed;
          result=remaining_budget-ticket_money;
        }
            return result;
    }
     if(travel_class=="NORMAL")
    {
        if(members>=1 && members<=4 )
        {
          consumed=budget*0.75;
          ticket_money=members*249.99;
	  remaining_budget=budget-consumed;
          result=remaining_budget-ticket_money;
        }
        else if(members>=5 && members<=9 )
        {
          consumed=budget*0.60;
          ticket_money=members*249.99;
	  remaining_budget=budget-consumed;
          result=remaining_budget-ticket_money;
        }
        else if(members>=10 && members<=24 )
        {
          consumed=budget*0.50;
          ticket_money=members*249.99;
	  remaining_budget=budget-consumed;
          result=remaining_budget-ticket_money;
        }
        else if(members>=25 && members<=49 )
        {
          consumed=budget*0.40;
          ticket_money=members*249.99;
	  remaining_budget=budget-consumed;
          result=remaining_budget-ticket_money;
        }
        else 
        {
          consumed=budget*0.25;
          ticket_money=members*249.99;
	  remaining_budget=budget-consumed;
          result=remaining_budget-ticket_money;
        }
            return result;
    }
}