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
        vector<long long int>v(n),v1(n+1);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        v1[0]=0;
        for(int i=1;i<=n;i++)
        {
            v1[i]=v[i-1]+v1[i-1];
        }
        long long int mx=0;
        for(int i=0; i<=k; ++i)
        {
            mx=max(mx,v1[n-i]-v1[2*(k-i)]);
        }
        cout<<mx<<endl;
    }
    return 0;
}