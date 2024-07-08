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
        vector<int> v1(n);
        v1[0] = v[0];
        for(int i=1;i<n;i++)
        {
            v1[i]=v[i]-v[i-1];
        }
        sort(v1.begin(),v1.end(),greater<int>());
        cout<<v1[0]<<endl;
    }
    return 0;
}