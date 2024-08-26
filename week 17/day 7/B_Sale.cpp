#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int sum=0;
    for(int i=0; i<m; ++i)
    {
        if(v[i]>=0)
        {
            break;
        }
        else
        {
            sum=sum+abs(v[i]);
        }
    }
    cout<<sum<<endl;
    return 0;
}