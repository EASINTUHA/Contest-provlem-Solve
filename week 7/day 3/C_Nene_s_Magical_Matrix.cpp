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
        long long int n;
        cin>>n;
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            sum+=i*(2*i-1);
        }
        cout<<sum<<" "<<2*n<<endl;
        for(int i=n;i>=1;i--)
        {
            cout<<1<<" "<<i<<" ";
            for(int j=1; j<=n; ++j)
            {
                cout<<j<<" ";
            }
            cout<<endl;
            cout<<2<<" "<<i<<" ";
            for(int j=1;j<=n;j++)
            {
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}