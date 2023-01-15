#include<iostream>

using namespace std;
int take_value(int);
void check(int x,int y, int z);
main()
{
int x,y,z;
x = take_value(x);
y = take_value(y);
z = take_value(z);
check(x,y,z);



}

int take_value(int x)
{
    cout<<"Enter Value: ";
    cin>> x;
    return x;
}
void check(int x,int y, int z)
{
    if(x == y && y == z)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}