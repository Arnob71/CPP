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
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i+1;i++)
        {
            if (A[j]<A[j-1])
            {
                swap(A[j],A[j-1]);
            }
        }
    }
    for(int i=0;i<n;i++)
     {
         cout<<A[i];
     }
return 0;
}
