#include<iostream>
using namespace std;
float sum(float n);
int main()
{
 float n;
 cout<<"This is a program to do summation of numbers (1-n) using recursion"<<endl;
 cout<<"Enter the value of n: ";
 cin>>n;
 float add=sum(n);
 cout<<"Sum="<<add<<endl;
return 0;
}
float sum(float n)
{
    if (n==0)
    {
    return 0;
    }
    float add=n+sum(n-1);
    return add;
}
