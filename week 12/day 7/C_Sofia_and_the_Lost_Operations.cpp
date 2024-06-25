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
        cin>>n;
        vector<int>v(n),v1(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        cin>>m;
        vector<int>d(m);
        map<int,int>mp;
        for(int i=0;i<m;i++)
        {
            cin>>d[i];
            mp[d[i]]++;
        }   
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            if(v[i]==v1[i])
            {
                continue;
            }
            if(mp[v1[i]])
            {
                mp[v1[i]]--;
            }
            else
                flag=false;
        }
        if(count(v1.begin(),v1.end(),d[m-1])==0)
        {
            flag=false;
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}