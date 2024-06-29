#include<bits/stdc++.h>
using namespace std;
long long int lcm(long long int a,long long int b)
{
    return (a*b)/__gcd(a, b);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int ans=lcm(a,b);
        if(ans!=b)
        {
            cout<<ans<<endl;
        }
        else
        {
            cout<<b*(b/a)<<endl;
        }
    }
    return 0;
}