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
        int n;
        string s;
        cin>>n>>s;
        vector<int>v(26,0);
        for(int i=0;i<n;i++)
        {    
            v[s[i]-'A']++;
        }
        int ct=0;
        for(int i=0; i<v.size(); ++i)
        {
            if(v[i]>=i+1)
            {
                ct++;
            }
        }
        cout<<ct<<endl;
    }
    return 0;
}