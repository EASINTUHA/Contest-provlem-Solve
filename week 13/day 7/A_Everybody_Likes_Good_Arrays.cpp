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
        int last, ans = 0;
        for(int i=0; i<n; ++i)
        {
            int x;
            cin>>x;
            if(i==0)
            {   
                last = x & 1;
                continue;
            }
            if((last+x)%2==0)
            {
                ans++;
            }
            last=x&1;
        }
        cout<<ans<<endl;  
    }
    return 0;
}