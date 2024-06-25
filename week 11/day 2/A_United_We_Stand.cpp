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
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        if(v[0]%v[n-1]==0)
        {
            cout<<-1<<endl;
        }
        else
        {
            int ct=0;
            bool flag=false;
            for(int i=0;i<n-1;i++)
            {
                if(v[i]==v[n-1])
                    break;
                ct++;
            }
            cout<<ct<<" "<<n-ct<<endl;
            for(int i=0;i<ct;i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
            for(int i=ct;i<n;i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}