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
        vector<int>v(n),v1(n);
        for(int i=0;i<n;i++)
        {
            v[i]=i+1;
        }
        for(int i=0;i<n;i++)
        {
            cout<<v[i];
            if(i==n-1)
            {
                cout<<endl;
            }
            else
            {
                cout<<" ";
            }
        }
        if(n==1)
        {
            cout<<v[0]<<endl;
        }
        else
        {
            int mid=(n+1)/2;
            for(int i=0;i<n;i++)
            {
                int x=(i+mid)%n;
                v1[i]=v[x];
            }
            for(int i=0;i<n;i++)
            {
                cout<<v1[i];
                if(i==n-1)
                {
                    cout<<endl;
                }
                else
                {
                    cout<<" ";
                }
            }
        }
    }
    return 0;
}