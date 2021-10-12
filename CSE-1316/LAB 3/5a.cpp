#include<bits/stdc++.h>
using namespace std;

struct customerinfo{
char name[50];
int accountnumber;
float balance;
};
void lessbalance()
{
    customerinfo data[50];
    char name;
    for(int i=0;i<5;i++){
    if(data[i].balance>=200)
    {
     cout<<data[i].name;
    }
    }
}
int main()
{
    customerinfo data[50];
    int n,i;
    cout<<"This is a structure for n students' name, id, address and mark, take them as input and print it"<<endl;
    cout<<"Enter the number of students: ";
    cin>>n;
    for(i=0;i<n;i++){
    cout<<"\nEnter name of the customer: ";
    cin>>data[i].name;
    cout<<"Enter account number of the customer: ";
    cin>>data[i].accountnumber;
    cout<<"Enter balance of the student: ";
    cin>>data[i].balance;
    }
    lessbalance();

    //cout<<"\nName: "<<data[i].name<<"\nID: "<<data[i].id<<"\nAddress: "<<data[i].address<<"\nMarks: "<<data[i].marks<<endl;
return 0;
}
