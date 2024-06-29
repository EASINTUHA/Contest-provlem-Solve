#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>v(31,0);
    for(int i=0; i<n; ++i)
    {
        int t,x;
        cin>>t>>x;
        if(t==1)
            v[x]++;            
        else
        {
            for(int j=29; j>=0; --j)
            {
                int mx=min(x>>j,v[j]);
                x -= mx*(1<<j);
            }
            cout<<(x==0 ? "YES" : "NO")<<endl;
        }
    }
    return 0;
}