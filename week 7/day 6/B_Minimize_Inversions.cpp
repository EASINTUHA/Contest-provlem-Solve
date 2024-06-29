#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<pair<int,int>>mp;
        vector<int> v(n);
        for(int i=0; i<n; ++i)
        {
            int x;
            cin>>x;
            mp.push_back({x,i});
        }
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(mp.begin(),mp.end());
        for(auto x:mp)
        {
            cout<<x.first<<" ";
        }
        cout<<endl;
        for(int i=0; i<n; ++i)
        {
            cout<<v[mp[i].second]<<" ";
        }
        cout<<endl;
    }
    return 0;
}