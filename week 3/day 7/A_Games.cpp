#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>v(n);
    vector<int>v1(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        cin>>v1[i];
    }
    int ct=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<n; j++)
        {
            if(v[i]==v1[j])
                ct++;
        }
    }
    cout<<ct<<endl;
    return 0;
}