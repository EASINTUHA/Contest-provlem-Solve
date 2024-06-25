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
        string s;
        cin>>n>>s;
        int ans=1;
        vector<int> v(n);
        for(int k=2;k<=n;k++)
        {
            fill(v.begin(),v.end(),0);
            int f=0;
            for(int i=0;i<=n-k;i++)
            {
                if((f+s[i]-'0')%2==0)
                {
                    f=f^1;
                    v[i+k-1]=1;
                }
                f=f^v[i];
            }
            int flag=1;
            for(int i=n-k+1; i<n; ++i)
            {
                flag &= ((f+s[i]-'0')%2==1);
                f=f^v[i];
            }
            if(flag)  ans=k;
        }
        cout<<ans<<endl;
    }
    return 0;
}