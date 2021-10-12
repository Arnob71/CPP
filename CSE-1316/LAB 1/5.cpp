#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"This is a program to calculate whether the entered string length is divisible by 3 or not"<<endl;
    cout<<"Enter the string: ";
    getline(cin,s);
    if (s.size()%3==0)
    {
        cout<<"String length is divisible by 3"<<endl;
    }
    else
    {
        cout<<"String length is not divisible by 3"<<endl;
    }
    return 0;
}
