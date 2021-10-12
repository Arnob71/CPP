#include<iostream>
using namespace std;
int main(){
       float arr[99999],lr,lr2,sm,sm2;
       int n,i,j=0;
       cout<<"This a program to find the second largest and second smallest element in an array"<<endl;
       cout<<"Enter number of elements of the array: ";
       cin>>n;
       cout<<"Enter elements of the array: ";
       for(i=0; i<n;i++)
        {
	      cin>>arr[i];
	    }
       sm=arr[0];
       for(int i=0;i<n;i++)
       {
         if(sm>arr[i])
       {
         sm=arr[i];
         j = i;
       }
       }
       sm2=99999;
       for(i=0;i<n;i++)
       {
        if(i==j)
        {
          i++;
		  i--;
        }
       else
        {
         if(sm2>arr[i])
         {
            sm2=arr[i];
         }
        }
       }
       lr=0;
       for(int i=0;i<n;i++)
       {
         if(lr<arr[i])
	     {
           lr=arr[i];
           j=i;
         }
       }
       lr2=0;
       for(i=0;i<n;i++)
       {
        if(i==j)
         {
          i++;
		  i--;
         }
       else
         {
        if(lr2<arr[i])
         {
           lr2=arr[i];
         }
         }
       }
  cout<<"The second smallest element in the array is "<<sm2<<endl;
  cout<<"The second largest element in the array is "<<lr2;
  return 0;
}
