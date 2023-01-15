#include<iostream>
using namespace std;

main()
{
string product,city;
float total;
float quantity;
cout<<"Enter Product: ";
cin>> product;
cout<<"Enter City: ";
cin>> city;
cout<<"Enter Quantity: ";
cin>> quantity;
if(product == "coffee")
    {
        if(city == "sofia")
        {
            total = 0.50*quantity;
        }
        
        if(city == "piovdiv")
        {
            total = 0.40*quantity;
        }
        
        if(city == "varna")
        {
            total = 0.45*quantity;
        }

    }   
if(product == "water")
    {
        if(city == "sofia")
        {
            total = 0.80*quantity;
        }
        
        if(city == "piovdiv")
        {
            total = 0.70*quantity;
        }
        
        if(city == "varna")
        {
            total = 0.70*quantity;
        }

    }
    if(product == "beer")
    {
        if(city == "sofia")
        {
            total = 1.20*quantity;
        }
        
        if(city == "piovdiv")
        {
            total = 1.15*quantity;
        }
        
        if(city == "varna")
        {
            total = 1.10*quantity;
        }

    }
    if(product == "sweets")
    {
        if(city == "sofia")
        {
            total = 1.45*quantity;
        }
        
        if(city == "piovdiv")
        {
            total = 1.30*quantity;
        }
        
        if(city == "varna")
        {
            total = 1.35*quantity;
        }

    }
        if(product == "peanuts")
    {
        if(city == "sofia")
        {
            total = 1.60*quantity;
        }
        
        if(city == "piovdiv")
        {
            total = 1.50*quantity;
        }
        
        if(city == "varna")
        {
            total = 1.55*quantity;
        }
        

    }
    cout<<"Total is "<<total;
}