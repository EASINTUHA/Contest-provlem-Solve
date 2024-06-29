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
        long long int n,k;
        cin>>n>>k;
        deque<long long int>d;
        for(int i=0; i<n; ++i)
        {
            int x;
            cin>>x;
            d.push_back(x);
        }
        bool flag=true;
        int ans=0;
        while(k>0 && d.size())
        {
            if(d.size()==1)
            {
                if(d.front()<=k)
                    ans++;
                break;
            }
            int x=d.front();
            int y=d.back();
            int z=min(x,y);
            d.pop_front();
            d.pop_back();
            if(flag)
            {
                if(z==x)
                {
                    if(k<2*z-1)   break;
                    k-=2*z-1;
                    y-=z-1;
                    flag=0;
                    d.push_back(y);
                    ans++;
                }
                else
                {
                    if(k<2*z)   break;
                    k-=2*z;
                    x-=z;
                    d.push_front(x);
                    ans++;
                }
            }
            else
            {
                if(z==y)
                {
                    if(k<2*z-1)   break;
                    k-=2*z-1;
                    x-=z-1;
                    flag=1;
                    d.push_front(x);
                    ans++;
                }
                else
                {
                    if(k<2*z)   break;
                    k-=2*z;
                    y-=z;
                    d.push_back(y);
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}