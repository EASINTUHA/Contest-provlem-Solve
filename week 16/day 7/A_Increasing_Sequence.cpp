#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<int>v;
    for(int i=0; i<n; ++i)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int count=0;
    for(int i=1; i<n; ++i)
    {
        if(v[i]<=v[i-1])
        {
            int x=v[i-1]-v[i];
            if(x==0)
            {
                v[i]+=m;
                count++;
            }
            else if(x%m==0)
            {
                int y=x/m;
                count+=y;
                v[i]+=y*m;
            }
            else
            {
                int y=(x/m)+1;
                count+=y;
                v[i]+=y*m;
            }
        }
        if(v[i]==v[i-1])
        {
            v[i]+=m;
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}