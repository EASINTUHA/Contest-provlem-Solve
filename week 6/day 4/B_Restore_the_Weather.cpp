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
        vector<pair<int,int>>v;
        vector<int>v1(n),v2(n);
        for(int i=0; i<n; ++i)
        {
            int x;
            cin>>x;
            v.push_back({x,i});
        }
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        for(int i=0;i<n;i++)
        {
            v2[v[i].second]=v1[i];
        }
        for(int i=0;i<v2.size();i++)
        {
            cout<<v2[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}