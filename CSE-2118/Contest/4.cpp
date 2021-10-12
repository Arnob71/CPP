#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s=0,n,A[99];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j=n-1; j>=i+1; j--)
        {
            if(A[j]<A[j-1])
            {
                swap(A[j],A[j-1]);
                s++;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<A[i];
        if(i!=n-1)
        {
            cout<<"b";
        }
    }
    cout<<"\n"<<s<<endl;
  return 0;
}
