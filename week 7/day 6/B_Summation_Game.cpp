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
        int n,k,x;
        cin>>n>>k>>x;
        vector<int>v(n+1,0),v1(n+1,0);
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        for(int i=1;i<=n;i++)
        {
            v1[i]=v1[i-1]+v[i];
        }
        int ans=INT_MIN;
        for(int i=n;i>=n-k;i--)
        {
            int r=min(i,x);
            ans=max(ans,2*v1[i-r]-v1[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}