#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; ++i)
    {
        cin>>v[i];
    }
    int min, min_pos, max, max_pos;
    min=max_pos=INT_MAX;
    max=min_pos=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(v[i]>max)
        {
            max=v[i];
            max_pos=i;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(v[i]<min)
        {
            min=v[i];
            min_pos=i;
        }
    }
    if(max_pos<min_pos)
    {
        int ans=max_pos+(n-1-min_pos);
        cout<<ans<<endl;
    }
    else 
    {
        int ans=max_pos+(n-1-min_pos)-1;
        cout<<ans<<endl;
    }
    return 0;
}