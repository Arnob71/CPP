#include<iostream>
using namespace std;
int main()
 {
    int arr1[99999], arr2[99999], arr3[99999], i,j=0,k=0,n;
       cout<<"This is a program to separate odd and even integers in separate arrays"<<endl;
       cout<<"Enter the number of elements of the array: ";
       cin>>n;
       cout<<"Enter elements of the array: ";
       for(i=0;i<n;i++)
        {
	      cin>>arr1[i];
	    }
       for(i=0;i<n;i++)
        {
	   if (arr1[i]%2 == 0)
	    {
	   arr2[j] = arr1[i];
	   j++;
	    }
	   else
	    {
	   arr3[k] = arr1[i];
	   k++;
	    }
        }
       cout<<"The Even elements are ";
       for(i=0;i<j;i++)
       {
	   cout<<arr2[i]<<" ";
       }
       cout<<"\nThe Odd elements are ";
       for(i=0;i<k;i++)
       {
	   cout<<arr3[i]<<" ";
       }
return 0;
 }
