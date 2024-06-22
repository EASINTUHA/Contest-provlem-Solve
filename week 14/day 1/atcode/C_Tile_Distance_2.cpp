#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    long long z1=abs(b - d);
    long long ans=z1;
    long long x=z1/2;
    long long z=abs(a-c)/2;
    ans=ans+z-min(z,x);
    cout << ans << endl;
    return 0;
}