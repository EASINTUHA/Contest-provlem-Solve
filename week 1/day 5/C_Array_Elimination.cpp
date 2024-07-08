#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i,n) for(ll i=0; i<n; i++)
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n; 
        cin>>n;
        vector<int> v(n); 
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        vector<int> v1(30,0);
        for(ll i=0;i<30;i++)
        {
            ll num=(1ll<<i);
            for(ll j=0;j<n;j++)
            {
                if((v[j]&num)!=0)
                {
                    v1[i]++; 
                }
            }
        }
        for(ll k=1;k<=n;k++)
        {
            bool flag=true;
            for(ll i=0;i<30;i++)
            {
                if((v1[i]%k)!=0)
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
            {
                cout<<k<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}