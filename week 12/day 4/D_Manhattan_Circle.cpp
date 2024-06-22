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
        int n,m,w=-1,x,p=0,q=-1;
        cin>>n>>m;
        x=m+1;
        vector<string> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            v[i]=v[i]+'.';
        }
        for(int i=0;i<n;i++)
        {
            int flag=0;
            int count=0;
            for(int j=0;j<=m;j++)
            {
                if(v[i][j]=='#')
                {
                    count++;
                    if(flag==0)
                    {
                        flag=1;
                        x=min(x,j);
                    }
                }
                else if(flag==1)
                {
                    w=max(w,j-1);
                    flag=0;
                }
            }
            p=max(count,p);
        }
        for(int i=0;i<n;i++)
        {
            int count=0;
            for (int j=0;j<=m;j++)
            {
                if(v[i][j]=='#')
                {
                    count++;
                    if(count==p)
                    {
                        q=i;
                        break;
                    }
                }
            }
        }
        int a=(x+1+w+1)/2;
        cout<<q+1<<" "<<a<<endl;
    }
    return 0;
}