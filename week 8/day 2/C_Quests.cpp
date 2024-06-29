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
        int n,k;
        cin>>n>>k;
        vector<int>v(n),v1(n),v2(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        v1[0]=v[0];
        for(int i=1; i<n; ++i)
        {
            v1[i]=v[i]+v1[i-1];
        }
        int mx=0,ans=0;
        for(int i=0; i<n; ++i)
        {
            cin>>v2[i];
            mx=max(mx,v2[i]);
            if(i<k)
            {
                ans=max(ans,v1[i]+mx*(k-i-1));
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}