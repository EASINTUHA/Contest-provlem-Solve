#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a,b;
    cin>>n>>a>>b;
    vector<int> v(n+1);
    for(int i=0;i<a;i++)
    {
        int x;
        cin>>x;
        v[x] = 1;
    }
    for(int i=1; i<=n; ++i)
    {
        if(v[i]==0)
            cout<<2<<" ";
        else
            cout<<1<<" ";
    }
    return 0;
}