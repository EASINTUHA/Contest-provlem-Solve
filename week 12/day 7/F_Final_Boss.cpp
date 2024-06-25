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
        long long int h,n,l=0,r,ans;
        cin>>h>>n;
        vector<int>v(n);
        vector<int>v1(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            h=h-v[i];
        }
        for(int i=0;i<n;i++) 
        {
            cin>>v1[i];
        }
        if(h<=0)
        {
            cout<<1<<endl;
        }
        else
        {
            r=h*2e5;
            while(l<=r)
            {
                long long int mid=l+(r-l)/2;
                long long int s=0;
                for(int i=0;i<n;i++)
                {
                    s=s+(mid/v1[i])*v[i];
                }
                if(h-s<=0)
                {
                    ans=mid;
                    r=mid-1;
                }
                else
                {
                    l=mid+1;
                }
            }
            cout<<ans+1<<endl;
        }
    }
    return 0;
}