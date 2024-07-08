#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(ll i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll count=0;
        for(ll i=1;i<n;i++)
        {
            count=__gcd(count,v[i]-v[i-1]);
        }
        if(count==0)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<count<<endl;
        }
    }
    return 0;
}