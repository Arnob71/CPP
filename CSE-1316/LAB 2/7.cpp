#include<iostream>
using namespace std;
int main()
{
    float arr1[99999], arr2[99999], arr3[99999];
    int n1, n2, n3;
    int i, j, k;
       cout<<"This is a program to merge two arrays of same size sorted in descending order"<<endl;
       cout<<"Enter the number of elements of the first array: ";
       cin>>n1;
       cout<<"Enter elements of the array: ";
       for(i=0;i<n1;i++)
        {
	      cin>>arr1[i];
	    }
       cout<<"Enter the number of elements of the second array: ";
       cin>>n2;
       cout<<"Enter elements of the array: ";
       for(i=0;i<n2;i++)
        {
	      cin>>arr2[i];
	    }
       n3= n1+n2;
       for(i=0;i<n1; i++)
        {
            arr3[i]=arr1[i];
        }
       for(j=0;j<n2; j++)
        {
            arr3[i]=arr2[j];
            i++;
        }
       for(i=0;i<n3; i++)
        {
           for(k=0;k<n3-1;k++)
           {
           if(arr3[k]<=arr3[k+1])
            {
            j=arr3[k+1];
            arr3[k+1]=arr3[k];
            arr3[k]=j;
            }
           }
         }
       cout<<"The merged array in descending order is ";
    for(i=0; i<n3; i++)
    {
       cout<<arr3[i]<<" ";
    }
return 0;
}
