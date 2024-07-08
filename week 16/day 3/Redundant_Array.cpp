#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff first
#define ss second
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,n,x=LONG_MAX;
        cin>>n;
        vector<int>v(n);
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        for(auto& p:mp)
        {
            a=p.ff;
            b=p.ss;
            x=min(x,(n-b)*a);
        }
        cout<<min(n,x)<<endl;
    }
    return 0;
}