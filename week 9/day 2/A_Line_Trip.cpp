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
        int n,x;
        cin>>n>>x;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int mx=0;
        for(int i=1; i<n; ++i)
        {
            int dis=v[i]-v[i-1];
            mx=max(mx,dis);
        }
        int ans=max(max(mx,2*(x-*--v.end())),*v.begin());
        cout<<ans<<endl;
    }
    return 0;
}