#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a;
    cout<<"Enter the number of coins: ";
    cin>>t;
    cout<<"Enter the amount: ";
    cin>>a;
    int toc[t];
    cout<<"Enter the coins: ";
    for(int i=1;i<=t;i++)
    {
        cin>>toc[i];
    }
    int coins[t+1][a+1];
    for(int i=0;i<t+1;i++)
    {
        for(int j=0;j<a+1;j++)
        {
        if(i==0&&j==0||j==0)
        {
            coins[i][j]=0;
        }
        else if(i==0)
        {
            coins[i][j]=INT_MAX;
        }
        else if(j>=toc[i])
        {
            coins[i][j]=min(coins[i-1][j],1+coins[i][j-toc[i]]);
        }
        else
        {
            coins[i][j]=coins[i-1][j];
        }
        }
    }
    for(int i=0;i<t+1;i++)
    {
        for(int j=0;j<a+1;j++)
        {
          cout<<coins[i][j]<<" ";
        }
    cout<<endl;
    }
    cout<<"Selected coins are ";
    for(int i=t;i>0;i--)
    {
        for(int j=a;j>0;j--)
        {
          if(coins[t][a]!=coins[t-1][a])
          {
            cout<<toc[t]<<" ";
            a=a-toc[t];
          }
          else
            t=coins[t-1][a];
        }
    }

    return 0;
}
