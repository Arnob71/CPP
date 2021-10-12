#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n],lis[n];
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
    for(int i=0;i<n;i++)
    {
        cout<<lis[i]<<" ";
    }
    cout<<endl;
}
   return 0;
}
