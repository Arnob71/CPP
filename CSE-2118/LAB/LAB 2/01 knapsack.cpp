#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,wh;
    cin>>n>>wh;
    int p[n],w[n];
    for(int i=0;i<n;i++)
        {
            cin>>p[i];
        }
    for(int i=0;i<n;i++)
        {
            cin>>w[i];
        }
    int ks[n+1][wh+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<wh+1;j++)
        {
            if(i==0||j==0)
            {
                ks[i][j]=0;
            }
            else if (j>=w[i-1])
            {
                int v=ks[i-1][j-w[i-1]]+p[i-1];
                ks[i][j]=max(ks[i-1][j],v);
            }
            else
            {
                ks[i][j]=ks[i-1][j];
            }
        }
    }
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<wh+1;j++)
        {
            cout<<ks[i][j]<<" ";
        }
        cout<<endl;

    }
return 0;
}
