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
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        if(v[0]==v[n-1])
        {
            int ct=count(v.begin(),v.end(),v[0]);
            if(ct<k)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
        else
        {
            int p=0,q=0,x=n,y=0;
            for(int i=n-1;i>=0;i--)
            {
                if(v[i]==v[n-1])
                {
                    q++;
                }
                if(q==k)
                {
                    y=i;
                    break;
                }
            }
            for(int i=0;i<n;i++)
            {
                if(v[i]==v[0])
                {
                    p++;
                }
                if(p==k)
                {
                    x=i;
                    break;
                }
            }
            if(x<y)
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