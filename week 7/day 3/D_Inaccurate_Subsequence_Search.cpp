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
        map<int,int>mp,mp1;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>v1[i];
            mp1[v[i]]++;
        }
        for(int i=0;i<m;i++)
        {
            mp[v[i]]++;
        }
        int ans=0,count=0;
        for(auto e: mp1)
        {
            count=count+min(mp[e.first],mp1[e.first]);
        }
        ans=ans+(count>=k);
        for(int i=m;i<n;i++)
        {
            mp[v[i-m]]--;
            count=count-(mp1[v[i-m]] > mp[v[i-m]]);
            mp[v[i]]++;
            count=count+(mp1[v[i]]>=mp[v[i]]);
            ans=ans+(count>=k);
        }
        cout<<ans<<endl;
    }
    return 0;
}