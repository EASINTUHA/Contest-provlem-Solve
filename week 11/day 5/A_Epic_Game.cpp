#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,n;
    cin>>a>>b>>n;
    int flag=false;
    int val;
    while(n>0)
    {
        if(flag==0)
        {
            val=__gcd(a,n);
            n=n-val;
            flag=true;
        }
        else
        {
            val=__gcd(b, n);
            n=n-val;
            flag=false;
        }
    }
    if (flag)
    {
        cout<<"0";
    }
    else
    {
        cout<<"1";
    }
    return 0;
}