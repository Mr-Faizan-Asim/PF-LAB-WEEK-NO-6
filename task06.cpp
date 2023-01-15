#include<iostream>
using namespace std;

float lowest_price(float kilm,string period);

main()
{
float kilm;
float low;
string period;
cout<<"Enter the Distance: ";
cin>>kilm;
cout<<"Enter the Period: ";
cin>>period;
low = lowest_price(kilm,period);
cout<< low;



}

float lowest_price(float kilm,string period)
{	
	float bus_fear,taxi_fear,taxi_fear_night,train_fear;
	if(period == "day" || period == "night")
	{
	
	taxi_fear = (0.7 + (kilm * 0.79)); 
	taxi_fear_night = ((0.7) + (kilm * 0.9));  
	bus_fear =  (kilm * 0.09);
	train_fear = (kilm * 0.06);
	
	if(kilm > 20 && kilm < 100)
	{	
	
		return bus_fear;
	
	}
	else if(kilm <= 20)	
	{
	
		if( period == "day")
		{
			return taxi_fear;
		}
		if( period == "night")
		{
			return taxi_fear_night;
		}
	
	
	}
	else if(kilm > 100)
	{
	
		return train_fear;
	
	}
	else{
		return 0;
	}
	
}

}