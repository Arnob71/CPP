#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    float weight[999],profit[999],cap,rat[999],x[999],res=0;;
    cout<<"Enter the number of objects: ";
    cin>>num;
    for(int i=0;i<num;i++)
    {
        cout<<"Enter the profit: ";
        cin>>profit[i];
        cout<<"Enter the weight: ";
        cin>>weight[i];
    }
    cout<<"\nEnter the capacity: ";
    cin>>cap;
    for(int i=0;i<num;i++)
    {
        rat[i]=profit[i]/weight[i];
    }
    for(int i=0;i<num;i++)
    {
        for(int j=i+1;j<num;j++)
        {
            if(rat[i]<rat[j])
                {
                    swap(rat[i],rat[j]);
                    swap(weight[i],weight[j]);
                    swap(profit[i],profit[j]);
                }
        }
    }
    for(int i=0;i<num;i++)
    {
        x[i]=0.0;
    }
    int i;
    for(i=0;i<num;i++)
    {
        if(weight[i]>cap)
        break;
        else{
            x[i]=1.0;
            res=res+profit[i];
            cap=cap-weight[i];
        }
    }
    if(i<num)
    {
        x[i]=cap/weight[i];
    res=res+(x[i]*profit[i]);
    }
    cout<<res;

return 0;
}
