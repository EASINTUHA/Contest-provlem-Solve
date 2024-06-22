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
        long long a,b;
        cin>>a>>b;
        if(a<b)
        {
            long long x=b%a;
            x=min(x,a-x);
            cout<<x<<endl;
        }
        else if(b<a)
        {
            cout<<a-b<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}