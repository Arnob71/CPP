#include<iostream>
using namespace std;
int main()
{
       char arr[99999],x;
       int i,n,p;
       cout<<"This a program to insert New value in the exact positions of the sorted array"<<endl;
       cout<<"Enter number of elements of the array : ";
       cin>>n;
       cout<<"Enter the elements of array in ascending order: ";
       for(i=0; i<n; i++)
        {
	      cin>>arr[i];
	    }
       cout<<"Enter the value to be inserted: ";
       cin>>x;
       cout<<"Enter position of the value to be inserted: ";
       cin>>p;
       cout<<"The current array is: ";
       for(i=0;i<n;i++)
       {
       cout<<arr[i]<<" ";
       }
       for(i=n;i>=p;i--)
       arr[i]= arr[i-1];
       arr[p-1]=x;
       cout<<"\nNew array after insertion: ";
       for(i=0; i<=n; i++)
       cout<<arr[i]<<" ";
}
