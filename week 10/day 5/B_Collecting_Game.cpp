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
        vector<pair<int,int> > v(n);
        vector<int>pre(n),ans(n);
        for(int i=0; i<n; ++i) 
        {    
            cin>>v[i].first;
            v[i].second=i;
        }
        sort(v.begin(),v.end());
        pre[0]=v[0].first;
        for(int i=1; i<n; ++i)
        {
            pre[i]=pre[i-1]+v[i].first;
        }
        ans[v.back().second]=n-1;
        int last=n-1;
        for(int i=v.size()-2; i>=0; --i)
        {
            if(pre[i]<v[i+1].first)
                last=i;
            ans[v[i].second]=last;
        }
        for(auto x:ans)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}