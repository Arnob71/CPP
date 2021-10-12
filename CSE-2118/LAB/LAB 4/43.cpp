#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cout<<"Enter the amount of numbers: ";
cin>>n;
int arr[n],lis[n];
cout<<"Enter the numbers: ";
for(int i=0;i<n;i++)
{
    cin>>arr[i];
    lis[i]=1;
}
for(int i=1;i<=n;i++)
{
    for(int j=0;j<i;j++)
    {
       if(arr[i]>=arr[j])
       {
           lis[i]=max(lis[i],1+lis[j]);
       }
    }
}
    cout<<"LNDS array is = ";
    for(int i=0;i<n;i++)
    {
        cout<<lis[i]<<" ";
    }
    cout<<endl;
int mx=INT_MIN;
for(int i=0;i<n;i++)
{
  if(mx<lis[i])
  {
      mx=lis[i];
  }
}
cout<<"LNDS Length is "<<mx<<endl;
   return 0;
}
