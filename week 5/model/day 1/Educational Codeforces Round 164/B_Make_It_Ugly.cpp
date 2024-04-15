#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        if(mp.size()==1)
        {
            cout<<-1<<endl;
            continue;
        }
        int x=v[0],y=0,ans=n;
        for(int i=0;i<n;i++)
        {
            if(v[i]==v[0])
            {
                y++;
            }
            else
            {
                ans=min(ans,y);
                y=0;
            }
        }
        ans=min(ans,y);
        cout<<ans<<endl;
    }
    return 0;
}