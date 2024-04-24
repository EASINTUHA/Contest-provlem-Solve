#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<long long int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        long long max1=v[n-1];
        for(int i=0;i<n-1;i++)
        {
            long long temp=(max1-v[i])/k;
            v[i]=v[i]+(temp*k);
        }
        long long min1=v[n-1];
        for(int i=0;i<n-1;i++)
        {
            min1=min(min1,v[i]);
        }
        long long ans=max1-min1;
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            ans=min(ans,max1-v[i]);
            max1=max(max1,v[i]+k);
        }
        cout<<ans<<endl;
    }
    return 0;
}