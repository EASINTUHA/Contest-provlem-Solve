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
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int mx=0,count=1;
        sort(v.begin(),v.end());
        for(int i=0;i<n-1;i++)
        {
            int d=v[i+1]-v[i];
            if(d>k)
            {
                mx=max(mx,count);
                count=1;
            }
            else
            {
                count++;
            }
        }
        mx=max(mx,count);
        cout<<n-mx<<endl;
    }
    return 0;
}