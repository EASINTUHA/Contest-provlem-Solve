#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    vector<int>v(n);
    for (int  i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cin>>m;
    vector<int>v2(m);
    for (int  i=0;i<m;i++)
    {
        cin>>v2[i];

    }
    sort(v.begin(),v.end());
    sort(v2.begin(),v2.end());
    int count=0;
    for (int  i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(v[i]==v2[j] || v[i]+1==v2[j] || v[i]==v2[j]+1)
            {
                v2[j]=-2;
                count++;
                break;
            }
        }
    }
    cout<<count;
    return 0;
}