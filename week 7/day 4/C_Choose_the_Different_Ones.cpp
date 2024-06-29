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
        int n,m,k;
        cin>>n>>m>>k;
        set<int>a,b,ans;
        for(int i=0; i<n; ++i)
        {
            int x;
            cin>>x;
            a.insert(x);
        }
        for(int i=0; i<m; ++i)
        {
            int x;
            cin>>x;
            b.insert(x);
        }
        int ct1=0,ct2=0;
        for(auto x:a)
        {
            if(x<=k)
            {    
                ct1++;
                ans.insert(x);
            }
        }
        for(auto x:b)
        {
            if(x<=k)
            {    
                ct2++;
                ans.insert(x);
            }
        }
        if(ans.size()==k && ct1>=k/2 && ct2>=k/2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}