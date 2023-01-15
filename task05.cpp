#include<iostream>


using namespace std;
float totalIncome(string,int,int);
main()
{
int row,column;
float result;
string type;
cout<<"Enter the Row: ";
cin>> row;
cout<<"Enter the Column: ";
cin>> column;
cout<<"Enter the Screen Type: ";
cin>> type;
result = totalIncome(type,row,column);
cout<<result;

}

float totalIncome(string type,int row,int column)
{	
	float total = row * column;
	if(type == "Premiere")
	{
	total = total*12;
	return total;
	}
	else if(type == "Normal")
	{
	total = total*7.5;
	return total;
	}

	else if(type == "Discount")
	{
	total = total*5;
	return total;
	}
	else
	{
	cout<<"Invalid";
	}
	return 0;

}
