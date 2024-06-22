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
        int n,t;
        cin>>n>>t;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        int ent=0;
        int index=-1;
        for(int i=0;i<n;i++)
        {
            if(a[i]<=t-i)
            {
                if(b[i]>=ent)
                {
                    ent=b[i];
                    index=i+1;
                }
            }
        }
        cout<<index<<endl;
    }
    return 0;
}
