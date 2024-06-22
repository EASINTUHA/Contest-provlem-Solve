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
        int n,ans=0,count=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x==0)
            {
                count++;
            }
            else
            {
                ans=max(count,ans);
                count=0;
            }
        }
        cout<<max(count,ans)<<endl;
    }
    return 0;
}