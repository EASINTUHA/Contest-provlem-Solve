#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>a, pair<int,int>b)
{
    if(a.first==b.first)
    {
        return a.second<b.second;
    }
    else
    {
        return a.first>b.first;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>>v;
        for(int i=1; i<=n; ++i)
        {
            int x;
            cin>>x;
            if(x%k)
            {
                x=x%k;
            }
            else
            {
                x=k;
            }
            v.push_back({x,i});
        }
        sort(v.begin(),v.end(),cmp);
        for(auto it:v)
        {
            cout<<it.second<<" ";
        }
        cout<<endl;
    }
    return 0;
}