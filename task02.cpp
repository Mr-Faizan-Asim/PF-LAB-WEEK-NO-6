#include<iostream>


using namespace std;
string gender(int age,char gend);
main()
{
int age;
char gend;
string st;
cout<<"Enter the Gender: ";
cin>> gend;
cout<<"Enter the Age: ";
cin>> age;
st = gender(age,gend);
cout<<st<<"Faizan";

}

string gender(int age, char gend)
{
if(age>=16 && gend== 'm')
{
return "MR.";
}

else if(age<16 && gend== 'm')
{
return "Master.";
}
else if(age>=16 && gend== 'f')
{
return "Ms.";
}
else if(age<16 && gend== 'f')
{
return "Miss.";
}
else
{
cout<<"Invalid";
}
return 0;
}
