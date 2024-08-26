#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    map<string,int> m,m2;
    vector<pair<string,int>>v;
    for(int i=0; i<n; ++i)
    {
        string s;
        int x;
        cin>>s>>x;
        m[s]+=x;
        v.push_back({s,x});
    }
    int mx=0;
    for(auto it:m)
    {
         mx=max(mx,it.second);
    }
    for(auto x:v)
    {
        m2[x.first]+=x.second;
        if(m2[x.first]>=mx && m[x.first]==mx)
        {
            cout<<x.first<<endl;
            return 0;
        }
    }
    return 0;
}