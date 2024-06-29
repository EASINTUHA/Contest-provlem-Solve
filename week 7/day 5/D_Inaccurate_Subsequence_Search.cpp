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
        int n,m,k;
        cin>>n>>m>>k;
        vector<int>v(n),v1(m);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>v1[i];
        }
        map<int,int>mp, mp1;
        for(auto x:v1)
        {
            mp1[x]++;
        }
        for(int i=0; i<m;i++)
        {
            mp[v[i]]++;
        }
        int ans=0,ct=0;
        for(auto e: mp1)
        {
            ct+= min(mp[e.first],mp1[e.first]);
        }
        ans += (ct>=k);
        for(int i=m; i<n; ++i)
        {
            mp[v[i-m]]--;
            ct -= (mp1[v[i-m]] > mp[v[i-m]]);
            mp[v[i]]++;
            ct += (mp1[v[i]]>=mp[v[i]]);
            ans += (ct>=k);
        }
        cout<<ans<<endl;
    }
    return 0;
}