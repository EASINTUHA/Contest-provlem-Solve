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
        int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int>v;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='B')
            v.push_back(i);
    }
    int ct=0;
    for(int i=0; i<n; ++i)
    {
        if(s[i]=='B')
        {
            ct++;
            i+=k-1;
        }
    }
    cout<<ct<<endl;
    }
    return 0;
}