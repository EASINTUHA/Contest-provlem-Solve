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
        vector<int>v;
        int mn=0,mx=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int t,x;
            cin>>t>>x;
            if(t==1)
            {
                mn=max(mn,x);
            }
            else if(t==2)
            {
                mx=min(mx,x);
            }
            else
            {
                v.push_back(x);
            }
        }
        int ans=mx-mn;
        if(ans<0)
        {
            cout<<0<<endl;
        }
        else
        {
            for(int i=0;i<v.size();i++)
            {
                if(v[i]>=mn && v[i]<=mx)
                {
                    ans--;
                }
            }
            cout<<ans+1<<endl;
        }
    }
    return 0;
}