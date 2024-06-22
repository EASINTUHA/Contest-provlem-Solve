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
        long long n,a,b;
        cin>>n>>a>>b;
        if(a<=b)
        {
            cout<<(n+a-1)/a<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }
    return 0;
}