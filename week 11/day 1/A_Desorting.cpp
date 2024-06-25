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
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        if(is_sorted(v.begin(),v.end()))
        {
            int d=INT_MAX;
            for(int i=1; i<n; ++i)
            {
                int r;
                r=v[i]-v[i-1];
                if(r<d)
                {
                    d=r;
                }
            }
            cout<<(d/2)+1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}