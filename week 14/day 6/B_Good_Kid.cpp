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
        v[0]++;
        int count=1;
        for(int i=0;i<n;i++)
        {
            count=count*v[i];
        }
        cout<<count<<endl;
    }
    return 0;
}