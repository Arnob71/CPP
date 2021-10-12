#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s=0,mini,A[99];
    cin>>n;
    for(int i=0;i<n;i++)
    {
      cin>>A[i];
    }
    for(int i=0;i<n;i++)
    {
      mini=i;
      for(int j=i;j<n;j++)
      {
          if(A[j]<A[mini])
          {
            mini=j;
          }
      }
           swap(A[i],A[mini]);
            if(i!=mini){s++;}
    }
    for(int i=0;i<n;i++)
    {
      cout<<A[i];
      if(i!=n-1)
      {
          cout<<" ";
      }
    }
    cout<<"\n"<<s<<endl;

    return 0;
}
