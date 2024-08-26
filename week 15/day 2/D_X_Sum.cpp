#include<bits/stdc++.h>
using namespace std;
int result(int i,int j,int n,int m,vector<vector<int>> &v)
{
    int a=0;
    int p=i,q=j;
    while(p>=0 && q>=0)
    {
        a=a+v[p][q];
        p--;
        q--;
    }
    p=i,q=j;
    while(p<n && q<m)
    {
        a=a+v[p][q];
        p++;
        q++;
    }
    p=i,q=j;
    while(p>=0 && q<m)
    {
        a=a+v[p][q];
        p--;
        q++;
    }
    p=i,q=j;
    while(p<n && q>=0)
    {
        a=a+v[p][q];
        p++;
        q--;
    }
    a=a-3*v[i][j];
    return a;
}
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
        vector<vector<int>> v(n, vector<int>(m));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>v[i][j];
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ans=max(ans,result(i,j,n,m,v));
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
