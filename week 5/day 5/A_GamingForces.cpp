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
        int n,count=0;
        cin>>n;
        vector<int>  v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n;i++)
        {
            if(v[i]==1)
            {
                count++;
            }
        }
        int ans=n-(count/2);
        cout<<ans<<endl;
    }
    return 0;
}