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
        int prod=1;
        for(int i=0; i<n; ++i)
        {
            int x;
            cin>>x;
            prod *=x;
        }
        if(2023%prod)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<2023/prod<<" ";
            for(int i=0; i<k-1; ++i)
            {
                cout<<1<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}