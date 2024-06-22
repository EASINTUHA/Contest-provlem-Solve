#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        int m;
        cin>>m;
        for(int j=0;j<m;j++)
        {
            v.push_back({j,i});
        }
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        cout<<v[x-1].second+1<<endl;
    }
    return 0;
}