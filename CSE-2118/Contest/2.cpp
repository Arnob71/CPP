#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,A[99];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<endl;
    for(int i=0;i<=n-1;i++)
    {
      int key=A[i];
      int j=i-1;
      while(j>=0&&A[j]>key)
      {
        A[j+1]=A[j];
        j--;
      }
       A[j+1]=key;
      for(int i=0;i<n;i++)
      {
        cout<<A[i];
        if(i!=n-1)
        {
        cout<<" ";
        }
      }
      cout<<endl;
    }
  return 0;
}
