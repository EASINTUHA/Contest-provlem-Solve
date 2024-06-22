#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>> n;
    vector<int> v(2*n);
    for(int i=0;i<2*n;i++)
    {
        cin>>v[i];
    }
    unordered_map<int,vector<int>> mp;
    for(int i=0;i<2*n;i++)
    {
        mp[v[i]].push_back(i);
    }
    int count = 0;
    for(int i=1;i<=n;i++)
    {
        if(mp[i].size()==2)
        {
            int x=mp[i][0];
            int y=mp[i][1];
            if(y-x==2)
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}