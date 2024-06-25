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
        int n,m,k,H;
        cin>>n>>m>>k>>H;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            int d=abs(H-v[i]);
            if(d<=(m-1)*k && d%k==0 && v[i]!=H)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}