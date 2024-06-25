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
        if(n==1)
        {
            cout<<k<<endl;
        }
        else if(k==1)
        {
            for(int i=0; i<n-1; ++i)
            {
                cout<<0<<" ";
            }
            cout<<1<<endl;
        }
        else
        {
            int x=log2(k);
            x--;
            int r=(2<<x)-1;
            for(int i=0; i<n-2; ++i)
            {
                cout<<0<<" ";
            }
            cout<<r<<" "<<k-r<<endl;
        }
    }
    return 0;
}