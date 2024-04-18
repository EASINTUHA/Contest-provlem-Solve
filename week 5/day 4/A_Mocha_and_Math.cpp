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
        if(n==1)
        {
            int x;
            cin>>x;
            cout<<x<<endl;
        }
        else
        {
            int ans;
            cin>>ans;
            for(int i=0;i<n-1;i++)
            {
                int x;
                cin>>x;
                ans=ans&x;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}