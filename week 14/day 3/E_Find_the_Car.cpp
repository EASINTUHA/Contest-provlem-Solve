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
        long long int n,k,q;
        cin>>n>>k>>q;
        vector<long long int>v(k+1,0),v1(k+1,0);
        for(int i=1;i<=k;i++)
        {
            cin>>v[i];
        }
        for(int i=1;i<=k;i++)
        {
            cin>>v1[i];
        }
        while(q--)
        {
            long long int d;
            cin>>d;
            long long int p=lower_bound(v.begin(),v.end(),d)-v.begin();
            if(v[p]==d)
            {
                cout<<v1[p]<<" ";
            }
            else
            {
                long long int x=v[p]-v[p-1];
                long long int y=v1[p]-v1[p-1];
                long long int z=d-v[p-1];
                cout<<((z*y)/x)+v1[p-1]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}