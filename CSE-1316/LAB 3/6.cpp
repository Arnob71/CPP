#include<bits/stdc++.h>
using namespace std;

struct Date{
int day;
int month;
int year;
};
int main()
{
    Date data[50];
    int n,d,m,y,t=0,f=0;
    cout<<"This is a structure to store the elements day, month and year to store the dates.If i give a date as input and if the dates are equal, display 'Dates are equal' otherwise display 'Dates are not equal'"<<endl;
    cout<<"Enter the number of dates to store: ";
    cin>>n;
    for(int i=0;i<n;i++){
    cout<<"\nEnter number of the day: ";
    cin>>data[i].day;
    cout<<"Enter number of the month: ";
    cin>>data[i].month;
    cout<<"Enter the year: ";
    cin>>data[i].year;
    }
    cout<<"\nEnter the date to check if it's stored or not"<<endl;
    cout<<"Enter number of the day: ";
    cin>>d;
    cout<<"Enter number of the month: ";
    cin>>m;
    cout<<"Enter the year: ";
    cin>>y;
    for(int i=0;i<n;i++){
    if((d==data[i].day)&&(m==data[i].month)&&(y==data[i].year))
    {
         t++;
    }
    }
    if(t>=1)
    {
         cout<<"\nDates are equal"<<endl;
    }
    else
    {
        cout<<"\nDates are not equal"<<endl;
    }
return 0;
}
