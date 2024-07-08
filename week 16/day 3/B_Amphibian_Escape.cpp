#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll a=0,n,m,p,x=1,y=1;
        cin>>n>>m>>p;
        while(x<=n)
        {
            if(x<p)
            {
                ll d=x*m;
                ll e=y*(m-1);
                ll f=d-e;
                if(f>=p) 
                {
                    ll g=f;
                    while(d-y*(m-1)>=p)
                    {
                        y++;
                        g=y*(m-1);
                    }
                    a=a+y-1;
                }
                else
                {
                    x++;
                }
            }
            else
            {
                a=a+n;
                x++;
            }
        }
        cout<<a<<endl;
    }
    return 0;
}