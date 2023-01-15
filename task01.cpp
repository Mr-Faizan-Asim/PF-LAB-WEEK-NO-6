#include<iostream>

using namespace std;
bool isSimilar(string,string);

main()
{
string x,y;

cout<<"Enter String: ";
cin>>x;
x = x-32;
cout<<"Enter String: ";
cin>>y;
isSimilar(x,y);





}


bool isSimilar(string x,string y)
{
    if(x == y)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return true;



}