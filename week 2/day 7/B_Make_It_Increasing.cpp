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
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int ans=0;
        bool flag=true;
        for(int i=n-2;i>=0;i--)
        {
            while(v[i]>=v[i+1] && v[i]>0)
            {
                v[i] >>=1;
                ans++;
            }
            if(v[i]==v[i+1])
            {
                flag=false;
                cout<<-1<<endl;
                break;
            }
        }
        if(flag)
        {
            cout<<ans<<endl;
        }
    }
    return 0;
}