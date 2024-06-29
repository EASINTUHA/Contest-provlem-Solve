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
        vector<int>a(n),b(n),c(n);
        for(auto &x:a)  cin>>x;
        for(auto &x:b)  cin>>x;
        for(auto &x:c)  cin>>x;
        set<pair<int,int>>p,q;
        for(int i=0; i<n; ++i)
        {
            p.insert({b[i],i});
            q.insert({c[i],i});
        }
        int ans=0;
        for(int i=0; i<n; ++i)
        {
            p.erase({b[i],i});
            q.erase({c[i],i});

            auto y1=*(--p.end());
            auto y2=*(--(--p.end()));
            auto z1=*(--q.end());
            auto z2=*(--(--q.end()));
            if(y1.second==z1.second)
                ans=max(ans,max(a[i]+y1.first+z2.first,a[i]+y2.first+z1.first));
            else
                ans=max(ans,a[i]+y1.first+z1.first);
            p.insert({b[i],i});
            q.insert({c[i],i});
        }
        cout<<ans<<endl;
    }
    return 0;
}