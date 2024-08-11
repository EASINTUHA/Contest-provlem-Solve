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
        int n,m;
        cin>>n>>m;
        if(n==m)
        {
            cout<<"NEUTRAL"<<endl;
        }
        else if(n>m)
        {
            cout<<"LOSS"<<endl;
        }
        else
        {
            cout<<"PROFIT"<<endl;
        }
    }
    return 0;
}