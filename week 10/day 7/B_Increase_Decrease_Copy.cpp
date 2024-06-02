#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int x,y=INT_MAX,ans=0;
        vector<long long int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        vector<long long int> v1(n+1);
        for(int i=0;i<n+1;i++)
        {
            cin>>v1[i];
        }
        x=v1.back();
        bool flag=false;
        for (int i=0;i<n;i++)
        {
            int p=min(v[i],v1[i]);
            int q=max(v[i],v1[i]);
            y=min(abs(v1[i]-x),min(y,abs(v[i]-x)));
            if(x>=p && x<=q)
            {
                flag=true;
            }
            ans=ans+abs(v[i]-v1[i]);
        }
        if(flag)
        {
            ans++;
            cout<<ans<<endl;
        }
        else
        {
            ans=ans+y+1;
            cout<<ans<<endl;
        }
    }
    return 0;
}

