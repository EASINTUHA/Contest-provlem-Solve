#include<bits/stdc++.h>
using namespace std;
bool check(long long int mid, vector<long long int> v,long long int x)
{
    long long int m=0;
    long long int n=v.size();
    for (int i=0;i<n;i++)
    {
        if (mid>=v[i])
        {
            m=m+mid-v[i];
        }
    }
    if (m>x)
    {
        return false;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,x;
        cin>>n>>x;
        vector<long long int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        long long int l=1;
        long long int h=2e9;
        long long int ans=-1;
        while (l <=h)
        {
            long long int mid = (l+ h) / 2;
            if (check(mid, v, x))
            {
                ans = max(ans, mid);
                l= mid + 1;
            }
            else
            {
                h= mid-1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
