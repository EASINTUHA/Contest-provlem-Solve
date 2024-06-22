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
        long long int n,m,p,x;
        cin>>n>>m>>p;
        if(p>=m)
        {
            x=min(n,p -m);
            x=(n-x)*m+(p*(p+1)/2)-((p-x)*((p-x)+1)/2);
        }
        else
        {
            x=n*m;
        }
        cout<<x<<endl;
    }
    return 0;
}