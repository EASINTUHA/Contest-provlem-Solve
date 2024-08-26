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
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        vector<long long int>bits(64,0);
        for(int i=0;i<n;i++)
        {
            long long int x=v[i];
            int y=0;
            while(x>0)
            {
                bits[y]=bits[y]+x%2;
                x=x/2;
                y++;
            }
        }
        int p=0;
        for(int i=0;i<64;i++)
        {
            if(bits[i]==0)
            {
                break;
            }
            p=p+(1<<i);
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]>p)
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}