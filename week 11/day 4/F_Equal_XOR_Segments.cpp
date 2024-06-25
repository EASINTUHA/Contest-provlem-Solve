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
        long long int n,q;
        cin>>n>>q;
        vector<int>v(n+1,0);
        map<int,vector<int>> mp;
        mp[0].push_back(0);
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
            v[i]=v[i]^v[i-1];
            mp[v[i]].push_back(i);
        }
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            if(v[l-1]==v[r])
            {
                cout<<"YES\n";
            }
            else
            {
                auto &v1=mp[v[r]], &v2=mp[v[l-1]];
                int it1=*lower_bound(v1.begin(),v1.end(),l);
                int it2=*--lower_bound(v2.begin(),v2.end(),r);
                if(it1<it2)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}