#include<iostream>
using namespace std;
int main()
{
    int i=0,n;
    float sum=0;
    cout<<"This is a program to find the sum of all n elements of the array using while loop"<<endl;
    cout<<"Enter the value of n: ";
    cin>>n;
    float arr[n];
    cout<<"Enter the elements of n: ";
    while(i<n)
    {
        cin>>arr[i];
        sum+=arr[i];
        i++;
    }
    cout<<"Sum="<<sum<<endl;
    return 0;
}
