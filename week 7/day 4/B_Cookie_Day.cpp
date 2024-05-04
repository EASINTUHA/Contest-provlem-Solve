#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        bool flag=false;
        int ans=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(v[i]>=m)
            {
                flag=true;
                ans=min(ans,v[i]%m);
            }
        }
        if(flag)
        {
            cout<<ans<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}