#include<bits/stdc++.h>
using namespace std;
const int N=3e5+10, M=1e9+7;
int dp[N];

int func(int n)
{
    if(n==0 || n==1)
        return 1;
    if(dp[n]!=-1) return dp[n];
    dp[n]=(func(n-1)+(2ll*(n-1)*func(n-2))%M)%M;
    return dp[n];
}
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
        memset(dp,-1,sizeof(dp));
        int x=0;
        for(int i=0;i<k;i++)
        {
            int r,c;
            cin>>r>>c;
            x += 2-(r==c);
        }
        int m=n-x;
        int ans=func(m);
        if(m==0 || m==1)
        {
            cout<<1<<endl;
        }
        else if(dp[m]!=-1)
        {
            cout<<dp[m]<<endl;
        }
        else
        {
            dp[m]=(func(m-1)+(2ll*(m-1)*func(m-2))%M)%M;
            cout<<dp[m]<<endl;
        }
    }
    return 0;
}