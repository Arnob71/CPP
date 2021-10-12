#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    int t;
    cin>>t;
    getchar();
    for(int i=0;i<t;i++)
    {
    cin>>s1;
    cin>>s2;
    int x=s1.size(),y=s2.size();
    s1='\0'+s1;
    s2='\0'+s2;
    int ed[y+1][x+1];
    for(int i=0;i<y+1;i++)
    {
        for(int j=0;j<x+1;j++)
        {
            if(j==0)
            {
                ed[i][j]=i;
            }
            else if(i==0)
            {
                ed[i][j]=j;
            }
            else if(s1[j]==s2[i])
            {
                ed[i][j]=ed[i-1][j-1];
            }
            else
            {
                int m=min(ed[i-1][j],ed[i][j-1]);
                ed[i][j]=1+min(m,ed[i-1][j-1]);
            }
        }
    }
    cout<<ed[y][x];
    if(i!=t-1)
    {
        cout<<endl;
    }
    }
return 0;
}
