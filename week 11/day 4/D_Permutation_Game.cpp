#include<bits/stdc++.h>
using namespace std;
void find(vector<long long int>&p,vector<long long int>&a,vector<long long int>&path,long long int pos)
{
    vector<bool>vis(p.size());
    while(!vis[pos-1])
    {
        vis[pos-1]=1;
        path.push_back(a[pos-1]);
        pos=p[pos-1];
    }
}

long long int score(vector<long long int>&path,long long int k)
{
    long long int sum=0,mx=0,cur;
    for(long long int i=0;i<path.size();i++)
    {
        if(k<i+1)
        {
            break;
        }
        cur=sum+path[i]*(k-i);
        mx=max(mx,cur);
        sum=sum+path[i];
    }
    return mx;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k,pb,ps;
        cin>>n>>k>>pb>>ps;
        vector<long long int>p(n),a(n),pathB,pathS;
        for(int i=0;i<n;i++)
        {
            cin>>p[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        find(p,a,pathB,pb);
        find(p,a,pathS,ps);
        long long int bs=score(pathB,k);
        long long int ss = score(pathS,k);
        if(bs==ss)
        {
            cout<<"Draw"<<endl;
        }
        else if(bs>ss) 
        {
            cout<<"Bodya"<<endl;
        }
        else
        {
            cout<<"Sasha"<<endl;
        }
    }
    return 0;
}