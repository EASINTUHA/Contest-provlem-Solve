#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<long long int> v(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
        }
        long long ans=0;
        for(int i=1;i<=n;i++)
        {
            long long left=v[i];
            if (left==1)
            {
                ans=ans+n;
            }
            else
            {
                long long x=1;
                for (int j=1;j<=n;j++)
                {
                    x=x*left;
                    if(x>1000000000L)
                    {
                        break;
                    }
                    else
                    {
                        if(x<=v[j])
                        {
                            ans++;
                        }
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
