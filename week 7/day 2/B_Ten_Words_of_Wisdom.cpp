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
        int n;
        cin>>n;
        map<int,int>mp;
        int max=0;
        for(int i=1; i<=n; ++i)
        {
            int x,y;
            cin>>x>>y;
            if(x<=10)
            {
                mp[y]=i;
            }
        }
        auto it=mp.rbegin();
        cout<<it->second<<endl;
    }
    return 0;
}