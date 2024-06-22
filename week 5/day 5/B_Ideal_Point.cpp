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
        vector<int> v(51,0);
        while(n--)
        {
            int l,r;
            cin>>l>>r;
            if(l==r && k==l)
            {
                v[k]++;
            }
            else if(l<=k && r>=k)
            {
                for(int i=l; i<=r; ++i)
                {
                    v[i]++;
                }
            }
        }
        auto mx=max_element(v.begin(), v.end());
        int index=mx-v.begin();
        int max_count=count(v.begin(),v.end(),*mx);
        if(index==k && max_count==1)
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