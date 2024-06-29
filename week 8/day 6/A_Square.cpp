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
        vector<pair<int,int>>v;
        for(int i=0; i<4; ++i)
        {
            int x,y;
            cin>>x>>y;
            v.push_back({x,y});
        }
        sort(v.begin(),v.end());
        int diff=abs(v[0].second-v[1].second);
        cout<<diff*diff<<endl;
    }
    return 0;
}