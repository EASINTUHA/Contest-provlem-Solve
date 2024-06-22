#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string a,b,c;
    cin>>a>>b>>c;
    map<char,int>mp;
    int n=a.size();
    int m=b.size();
    int p=c.size();
    for(int i=0;i<n;i++)
    {
        mp[a[i]]++;
    }
    for(int i=0;i<m;i++)
    {
        mp[b[i]]++;
    }
    for(int i=0;i<p;i++)
    {
        mp[c[i]]++;
    }
    bool flag=true;
    for(auto it:mp)
    {
        if(it.second%2!=0)
        {
            flag=false;
            break;
        }
    }
    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}