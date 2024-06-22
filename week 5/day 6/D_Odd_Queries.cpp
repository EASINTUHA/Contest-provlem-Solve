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
        int n,q;
        cin>>n>>q;
        vector<int>v;
        v.push_back(0);
        int count=0;
        for(int i=0; i<n; ++i)
        {
            int x;
            cin>>x;
            if(x&1)
            {
                count++;
            }
            v.push_back(count);
        }
        while(q--)
        {
            int l,r,k;
            cin>>l>>r>>k;
            int x=count-v[r]+v[l-1];
            if(k&1)
            {
                x=x+r-l+1;
            }
            if(x%2==1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}