#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int count1=0, count2=0, count3=0, count4=0;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]==1)
        {
            count1++;
        }
        else if(v[i]==2)
        {
            count2++;
        }
        else if(v[i]==3)
        {
            count3++;
        }
        else 
        {
            count4++;
        }
    }
    int taxi=count4;
    if(count2>1)
    {
        taxi=taxi+count2/2;
        count2=count2%2;
    }
    while(count3>0 && count1>0)
    {
        taxi++;
        count3--;
        count1--;
    }
    if(count3>0) 
        taxi=taxi+count3;
    if(count1>0 && count2>0) 
    {
        taxi++;
        count2--;
        count1=count1-2;
    }
    while(count2>0)
    {
        taxi++;
        count2--;
    }
    while(count1>0)
    {
        taxi++;
        count1=count1-4;
    }
    cout<<taxi<<endl;
    return 0;
}