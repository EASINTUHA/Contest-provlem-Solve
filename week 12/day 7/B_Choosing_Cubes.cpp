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
        int n,f,k;
        cin>>n>>f>>k;
        vector<int> v(n);
        for(int i=0;i<v.size();i++)
        {
            cin>>v[i];
        }
        int x=v[f-1];
        sort(v.begin(),v.end(),greater<int>());
        if(k==n || v[k]<x)
        {
            cout<<"YES"<<endl;
        }
        else if(v[k]==x && v[k-1]==x)
        {
            cout<<"MAYBE"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}