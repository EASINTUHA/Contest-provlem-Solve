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
        if(n==1)
        {
            cout<<0<<endl;
        }
        else
        {
            int x=INT_MIN;
            for(int i=1;i<n;i++)
            {
                x=max(x,v[i-1]-v[i]);
            }
            for(int i=1;i<n;i++)
            {
                x=max(x,v[i]-v[0]);
            }
            for(int i=0;i<n-1;i++)
            {
                x=max(x,v[n-1]-v[i]);
            }
            cout<<x<<endl;
        }
    }
    return 0;
}