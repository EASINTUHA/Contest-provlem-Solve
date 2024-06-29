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
        string s,f;
        cin>>n>>s>>f;
        int x=0,y=0,m=0;
        for(int i=0; i<n; ++i)
        {
            if(s[i]=='1')
            {
                x++;
            }
            if(f[i]=='1')
            {
                y++;
            }
            if(s[i]!=f[i])
            {
                m++;
            }
        }
        int r=abs(x-y);
        int ans=r+(m-r)/2;
        cout<<ans<<endl;
    }
    return 0;
}