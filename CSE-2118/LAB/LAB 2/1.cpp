#include<bits/stdc++.h>
using namespace std;
int mem[99999];
int fib(int n)
{
    if(n<=1)
    return n;
    if(mem[n]!=0)
        return mem[n];
    else
        mem[n]=fib(n-1)+fib(n-2);
    return mem[n];
}
int main()
{
   int n;
   cout<<"Enter the value of n: ";
   cin>>n;
   cout<<n<<"th fibonacci is "<<fib(n);
   return 0;
}
