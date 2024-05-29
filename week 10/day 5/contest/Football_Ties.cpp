#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int ans=0;
        int mn=min(a,b);
        for (int i=0;i<=mn;i++)
        {
            if((a-i)%3==0 && (b-i)%3==0)
            {
                ans=i;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

