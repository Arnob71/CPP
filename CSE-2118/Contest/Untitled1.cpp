#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    int x=str1.size(), y=str2.size();
    int lcs[x+1][y+1];
    for(int i=0;i<x+1;i++)
    {
        for(int j=0;j<y+1;j++)
        {
            if(i==0||j==0)
            {
                lcs[i][j]=0;
            }
            else if(str1[i]==str2[j])
            {
                lcs[i][j]=1+lcs[i-1][j-1];
            }
            else
            {
                lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
            }
        }
    }
    cout<<lcs[x][y];
   return 0;
}
