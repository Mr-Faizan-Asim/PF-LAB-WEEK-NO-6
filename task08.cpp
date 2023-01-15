#include<iostream>

using namespace std;
void check(string ticket,int budget,int people);
main()
{
int budget,people;
string ticket;
cout<<"Enter Ticket Type: ";
cin>> ticket;
cout<<"Enter Budget: ";
cin>> budget;
cout<<"Enter People: ";
cin>> people;
check(ticket,budget,people);

}

void check(string ticket,int budget,int people)
{
float total;
if (ticket == "VIP")
{
if(people<=4)
{
    total = budget - (budget*0.75);       
}
else if(people<=5 && people>=9)
{
    total = budget - (budget*0.60);       
}
else if(people<=10 && people>=24)
{
    total = budget - (budget*0.5);       
}
else if(people<=25 && people>=49)
{
    total = budget - (budget*0.40);       
}
else if(people>=50)
{
    total = budget - (budget*0.25);       
}
total = total - (499.99*people)
if(total>0)
{
    cout<<""<<total
}
}




}