#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x;
        cin>>n>>m;
        vector<string> v(n);
        string s1,s2;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int count=INT_MAX;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                x=0;
                for(int c=0;c<m;c++)
                {
                    x=x+abs(v[i][c]-v[j][c]);
                }
                count=min(x,count);
            }
        }
        cout<<count<<endl;
    }
    return 0;
}