#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,l;
    cin>>n>>l;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int mx=0;
    sort(v.begin(),v.end());
    for(int i=1;i<n;i++)
    {
        int x=v[i]-v[i-1];
        mx=max(x,mx);
    }
    cout<<showpoint<<fixed<<setprecision(10);
    double dis=max(v[0]-0,l-v[n-1]);
    cout<<max(dis,(double)mx/2)<<endl;
    return 0;
}