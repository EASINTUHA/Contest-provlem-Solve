#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2==0)
        {
            for(int i=1;i<=n/2;i++)
            {
                cout<<i<<" "<<(n+1-i)<<" ";
            }
        }
        else if(n==3)
        {
            cout<<"1 2 3";
        }
        else
        {
            for(int i=1;i<=n/2;i++)
            {
                cout<<i<<" "<<(n-i)<<" ";
            }
            cout<<n;
        }
        cout<<endl;
    }
    return 0;
}
