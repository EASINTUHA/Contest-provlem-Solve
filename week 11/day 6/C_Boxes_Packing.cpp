#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,x,ans=-1;
    cin>>n;
    unordered_map<ll,ll> mp;
    while(n--)
    {
        cin>>x;
        mp[x]++;
        ans=max(ans,mp[x]);
    }
    cout<<ans<<endl;
    return 0;
}