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
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long long ans = 0;
        for(int i=0;i<n-1;++i)
        {
            for(int j=i+1;j<n;j++)
            {
                if((a[i] & a[j]) >= (a[i] ^ a[j]))
                {
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
