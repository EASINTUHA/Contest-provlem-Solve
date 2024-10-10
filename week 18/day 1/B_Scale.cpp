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
        vector<string> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n;i=i+m)
        {
            for(int j=0;j<n;j=j+m)
            {
                cout<<v[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}