#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n,i,j,sum=0,mn=INT_MAX;
    cin>>n;
    vector<vector<long long int>> v(n,vector<long long int>(n));
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>v[i][j];
            sum=sum+v[i][j];
        }
        mn=min(mn,v[i][n-i-1]);
    }
    cout<<sum-mn<<endl;
    return 0;
}