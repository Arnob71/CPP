#include<iostream>
using namespace std;
int main()
{
    char arr1[99999], arr2[99999];
    int i, n;
    cout<<"This is a program to copy the elements of one array into another array"<<endl;
    cout<<"Enter the number of elements of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array : ";
       for(i=0;i<n;i++)
        {
	      cin>>arr1[i];
	    }
    for(i=0; i<n; i++)
    {
        arr2[i]=arr1[i];
    }
    cout<<"The elements stored in the first array are: ";
    for(i=0; i<n; i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<"\nThe elements copied into the second array are: ";
    for(i=0; i<n; i++)
    {
        cout<<arr2[i]<<" ";
    }
}
