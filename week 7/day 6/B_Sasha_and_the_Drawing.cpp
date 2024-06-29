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
        int n,m;
        cin>>n>>m;
        int x=2*(n+n-2);
        if(m<=x)
        {
            if(m%2==1)
            {
                m++;
            }
            cout<<m/2<<endl;
        }
        else
        {
            cout<<x/2+(m-x)<<endl;
        }
    }
    return 0;
}