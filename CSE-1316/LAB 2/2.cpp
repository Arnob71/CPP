#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"This is a program to read n number of values in an array and display it in reverse order"<<endl;
    cout<<"Enter the value of n: ";
    cin>>n;
    char arr[n];
    cout<<"Enter the elements of n: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The elements are ";
    for(int i=n-1; i>=0; i--)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
