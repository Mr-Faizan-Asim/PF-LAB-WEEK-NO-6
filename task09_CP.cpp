#include<iostream>

using namespace std;
string check_year();
int check_holidays();
int check_weekends();
float check_play(string year,int holidays,int weekend_home_travel); 



main()
{
int holidays,weekend_home_travel;
string year;
float total_play;
 year = check_year();
 holidays = check_holidays();
 weekend_home_travel = check_weekends();
 total_play = check_play(year,holidays,weekend_home_travel);
 cout<<"Total Play is "<<total_play;

}

float check_play(string year,int holidays,int weekend_home_travel)
{
 int weeks = 48;
 double play_in = (3*(weeks/4)) + ((2 * holidays)/3);
 double total_play = (play_in*weekend_home_travel)/weekend_home_travel;
 if(year == "Leap" || year == "leap" )
 {
    total_play = total_play + (total_play*0.15);
    
 }  
    return total_play;




}

string check_year()
{
string year;
cout<<"Enter Year Type: ";
cin>>year;
return year;


}
int check_holidays()
{
    int holidays;
    cout<<"Enter Holidays other than Sunday or Saturday: ";
cin>>holidays;

return holidays;
}
int check_weekends()
{
    int weekends;
    cout<<"Enter Weekends travel to Home-Land: ";
    cin>>weekends;

    return weekends;
}