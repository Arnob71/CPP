#include<bits/stdc++.h>
using namespace std;

struct studentinfo{
char name[50];
char address[50];
int id;
float marks;
};
bool compareid(studentinfo i1, studentinfo i2)
{
    if(i1.id>i2.id)
    return true;
    else
    return false;
}
int main()
{
    studentinfo data[50];
    int n,i;
    cout<<"This is a structure for n students' name, id, address and mark, take them as input and print it"<<endl;
    cout<<"Enter the number of students: ";
    cin>>n;
    for(i=0;i<n;i++){
    cout<<"\nEnter name of the student: ";
    cin>>data[i].name;
    cout<<"Enter id of the student: ";
    cin>>data[i].id;
    cout<<"Enter address of the student: ";
    cin>>data[i].address;
    cout<<"Enter mark of the student: ";
    cin>>data[i].marks;
    }
    sort(data,data+n,compareid);
    for(i=0;i<n;i++){
    cout<<"\nName: "<<data[i].name<<"\nID: "<<data[i].id<<"\nAddress: "<<data[i].address<<"\nMarks: "<<data[i].marks<<endl;
    }
return 0;
}
