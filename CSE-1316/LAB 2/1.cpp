#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"This is a program to store n elements in an array and print it"<<endl;
    cout<<"Enter the value of n: ";
    cin>>n;
    char arr[n];
    cout<<"Enter the elements of n: ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The elements are ";
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
