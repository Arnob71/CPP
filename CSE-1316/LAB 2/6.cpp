#include<iostream>
using namespace std;
int main()
{
    char arr[99999];
    int n, ctr=0, i, j, k;
       cout<<"This is a program to print all unique elements of an array"<<endl;
       cout<<"Enter the number of elements of the array: ";
       cin>>n;
       cout<<"Enter elements of the array: ";
       for(i=0;i<n;i++)
        {
	      cin>>arr[i];
	    }
    cout<<"All unique elements found in the array are ";
    for(i=0; i<n; i++)
    {
        ctr=0;
        for(j=0,k=n; j<k+1; j++)
        {
          if (i!=j)
          {
           if(arr[i]==arr[j])
          {
           ctr++;
          }
         }
    }
    if(ctr==0)
    {
     cout<<arr[i]<<" ";
    }
    }
return 0;
}
