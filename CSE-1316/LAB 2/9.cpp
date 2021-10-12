#include<iostream>
using namespace std;
int main()
{
    int arr1[100];
    int i, mx, mn, n;
    cout<<"This is a program to find maximum and minimum element in an array"<<endl;
    cout<<"Enter size of the an Array: ";
    cin>>n;
    cout<<"Enter array values: ";
    for(i=0;i<n;i++)
    {
      cin>>arr1[i];
    }
    mx = arr1[0];
    mn = arr1[0];
    for(i=1; i<n; i++)
    {
      if(arr1[i]>mx)
      {
        mx = arr1[i];
      }
      if(arr1[i]<mn)
      {
        mn = arr1[i];
      }
    }
    cout<<"Maximum element is: "<<mx<<endl;
    cout<<"Minimum element is: "<<mn;
return 0;
}
