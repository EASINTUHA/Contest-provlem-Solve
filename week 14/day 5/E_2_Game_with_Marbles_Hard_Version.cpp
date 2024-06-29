#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        vector<long long int>v(n),v1(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        set<pair<long long int,long long int>>s;
        for(long long int i=0; i<n; ++i)
        {
             s.insert({v[i]+v1[i],i});
        }
        long long int t=1,ans=0;
        while(s.size())
        {
            long long int i=(*s.rbegin()).second;
            if(t)
            {
                ans=ans+v[i]-1;
            }
            else
            {
                ans=ans-v1[i]+1;
            }
            s.erase(--s.end());
            t=t^1;
        }
        cout<<ans<<endl;
    }
    return 0;
}