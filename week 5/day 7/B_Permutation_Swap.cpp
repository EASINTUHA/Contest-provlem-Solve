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
        int n,ans=0,diff;
        cin>>n;
        vector<int> v(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
        }
        for(int i=1;i<=n;i++)
        {
            diff=abs(v[i]-i);
            ans=__gcd(ans,diff);
        }
        cout<<ans<<endl;
    }
    return 0;
}