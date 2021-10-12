#include<iostream>
using namespace std;
int gcd(int x, int y);
int main()
{
 int a,b;
 cout<<"This is program to find gcd function of a,b using recursion"<<endl;
 cout<<"Enter the value of a: ";
 cin>>a;
 cout<<"Enter the value of b: ";
 cin>>b;
 int res=gcd(a,b);
 cout<<"The gcd of "<<a<<" and "<<b<< " is "<<res<<endl;
}
int gcd(int x, int y)
{
    if (y!=0)
       return gcd(y,x%y);
    else
       return x;
}
