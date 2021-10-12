#include<iostream>
using namespace std;
int main()
{
       char arr1[99999], arr2[99999], arr3[99999];
       int n,mm=1,ctr=0, i, j;
       cout<<"This is a program count total number of duplicate elements in an array: "<<endl;
       cout<<"Enter the number of elements of the array: ";
       cin>>n;
       cout<<"Enter elements of the array: ";
       for(i=0;i<n;i++)
        {
	      cin>>arr1[i];
	    }
		for(i=0;i<n; i++)
        {
		arr2[i]=arr1[i];
		arr3[i]=0;
        }
       for(i=0;i<n; i++)
        {
		for(j=0;j<n;j++)
        {
          if(arr1[i]==arr2[j])
            {
            arr3[j]=mm;
            mm++;
            }
        }
			mm=1;
        }
       for(i=0; i<n; i++)
       {
         if(arr3[i]==2)
            {
                ctr++;
            }
       }
      cout<<"The total number of duplicate elements found in the array is "<<ctr<<endl;
return 0;
}
