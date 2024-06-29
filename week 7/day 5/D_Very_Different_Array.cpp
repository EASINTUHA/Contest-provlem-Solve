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
        cin>>n>>m;
        vector<int>v(n),v1(m);
        for(int &i:v)   cin>>i;
        for(int &i:v1)   cin>>i;
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        int ans=0;
        int p=0,q=n-1,x=0,y=m-1;
        while(p<=q)
        {
            int l=abs(v[p]-v1[y]);
            int r=abs(v[q]-v1[x]);
            if(l>=r)
            {
                ans=ans+l;
                p++;
                y--;
            }
            else
            {
                ans=ans+r;
                q--;
                x++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}