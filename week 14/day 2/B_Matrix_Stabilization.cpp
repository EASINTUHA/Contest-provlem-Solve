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
        vector<vector<int>> v(n,vector<int>(m));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>v[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            for (int j=0;j<m;j++)
            {
                int x=0,y=1;
                if(i-1>=0)
                {
                    x=max(x,v[i-1][j]);
                }
                if(j-1>=0)
                {
                    x=max(x,v[i][j-1]);
                }
                if(i+1<n)
                {
                    x=max(x,v[i+1][j]);
                }
                if(j+1<m)
                {
                    x=max(x,v[i][j+1]);
                }
                if((i-1>=0 && v[i][j]<=v[i-1][j]) || (j-1>=0 && v[i][j]<=v[i][j-1]) || (i+1<n && v[i][j]<=v[i+1][j]) || (j+1<m && v[i][j]<=v[i][j+1]))
                {
                    y=0;
                }
                else if(y==1)
                {
                    v[i][j]=x;
                }
            }
        }
        for (int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}