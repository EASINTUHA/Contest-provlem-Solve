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
        long long int n;
        cin>>n;
        long long int mx=0, ct=0, sum=0;
        for(long long int i=0; i<n; ++i)
        {
            long long int x;
            cin>>x;
            sum+=x;
            mx=max(x,mx);
            if(sum-mx==mx) ct++;
        }
        cout<<ct<<endl;
    }
    return 0;
}