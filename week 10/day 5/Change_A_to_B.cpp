#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,k,ans=0;
    cin>>a>>b>>k;
    if(k>b)
    {
        cout<<b-a<<endl;
    }
    while(b!=a)
    {
        if(b/k>=a)
        {
            b=b/k+b%k;
        }
        else if(b%2!=0)
        {
            b--;
        }
        else
        {
            ans=ans+b-a;
            break;
        }
        ans++;
    }
    cout<<ans<<endl;    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}