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
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int diff=INT_MAX;
        for(int i=1; i<n; i++)
        {
            diff=min(v[i]-v[i-1],diff);
        }
        cout<<diff<<endl;
    }
    return 0;
}