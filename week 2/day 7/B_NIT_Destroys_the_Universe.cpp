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
        int l=-1,r=-1;
        for(int i=0;i<n;i++)
        {
            if(v[i])
            {
                r=i;
                if(l==-1)
                {
                    l=i;
                }
            }
        }
        bool flag=true;
        if(l==-1)
        {
            cout<<0<<endl;
        }
        else
        {
            for(int i=l;i<=r;i++)
            {
                if(v[i]==0)
                {
                    flag=false;
                    cout<<2<<endl;
                    break;
                }
            }
            if(flag)
            {
                cout<<1<<endl;
            }
        }
    }
    return 0;
}