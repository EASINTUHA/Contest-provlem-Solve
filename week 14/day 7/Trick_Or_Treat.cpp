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
        long long int n,m,x,y,z,total=0;
        cin>>n>>m;
        vector<long long int> v(n),v1(n);
        unordered_map<int,int> mp,mp1;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            x=v[i]%m;
            mp[x]++;
        }
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
            x=v1[i]%m;
            mp1[x]++;
        }
        for(auto it=mp.begin();it != mp.end();it++)
        {
            x=it->first;
            y=it->second;
            z=(m-x)%m;
            if(mp1.find(z) != mp1.end())
            {
                total=total+y*mp1[z];
            }
        }
        cout<<total<<endl;
    }
    return 0;
}