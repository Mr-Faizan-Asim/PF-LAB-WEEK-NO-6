#include<iostream>


using namespace std;
string check(float speed);
main()
{
float speed;
string result;
cout<<"Enter the Speed: ";
cin>> speed;
result = check(speed);
cout<<result;

}

string check(float speed)
{
if(speed<=10)
{
return "slow";
}

else if(speed>10 && speed<=50)
{

 return "Average";
}


else if(speed>50 && speed<=150)
{
return "Fast";
}


else if(speed>150 && speed<=1000)
{
return "Ultra_Speed";
}

else
{
return "Extremely-Fast";
}


return 0;
}
