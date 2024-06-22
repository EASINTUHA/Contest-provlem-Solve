#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<long long int> p,v(100001,0);
    v[1]=1;
    for(long long int i=2;i<100001;i++)
    {
        if(v[i]==0)
        {
            v[i]=i;
            for(long long int j=i*i;j<100001;j=j+i)
            {
                if(v[j]==0)
                {
                    v[j]=i;
                }
            }
        }
    }
    for(int i=2;i<100001;i++)
    {
        if(v[i]==i)
        {
            p.push_back(i);
        }
    }
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,x=0;
        cin>>n;
        if(v[n] !=n)
        {
            for(int i=0;i<p.size() && (p[i]<=v[n]);i++)
            {
                x=x+p[i]*n;
            }
        }
        else
        {
            for(int i=0;i<p.size() && p[i]<=n;i++)
            {
                x=x+p[i]*n;
            }
        }
        cout<<x<<endl;
    }
    return 0;
}