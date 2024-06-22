#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
	cin >> n;
    int a=0,b=0,c=0,d=0;
	vector<int>v(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        if(i&1)
        {
            b=b+v[i];
        }
        else
        {
            a=a+v[i];
        }
    }
    int ct=0;
    for(int i=1;i<=n;i++)
    {
        if(i&1)
        {
            b=b-v[i];
        }
        else
        {
            a=a-v[i];
        }
        if(a+d==b+c)
        {    
            ct++;
        }
        if(i&1)
        {
            d=d+v[i];
        }
        else
        {
            c=c+v[i];
        }
    }
    cout<<ct<<endl;
    return 0;
}