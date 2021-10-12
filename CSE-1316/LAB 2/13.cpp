#include<iostream>
using namespace std;
int main(){
       char arr[99999];
       int i,pos,n;
       cout<<"This is a program to delete an element at desired position (given index) from an array"<<endl;
       printf("Enter the number of elements of the array: ");
       cin>>n;
       cout<<"Enter elements of the array: ";
       for(i=0;i<n;i++)
        {
	      cin>>arr[i];
	    }
       cout<<"Enter the position of element to delete: ";
       cin>>pos;
       i=0;
       while(i!=pos-1)
            i++;
       while(i<n){
            arr[i]=arr[i+1];
            i++;
       }
       n--;
       cout<<"New array after deletion: ";
       for(i=0;i<n;i++)
        {
		   cout<<arr[i]<<" ";
		}
}
