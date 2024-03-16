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
        vector<int> v(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
        }
        int ans=v[1]-1;
        int index=ans;
        for(int i=2;i<=n;i++)
        {
            int index2=index+i;
            if(index2<v[i])
            {
                int x=v[i]-index-i;
                index=index+x;
                ans=ans+x;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}