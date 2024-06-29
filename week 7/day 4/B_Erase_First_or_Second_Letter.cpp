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
        int n,ans=0;
        string s;
        cin>>n>>s;
        vector<bool> flag(26,false);
        for(int i=0; i<n; ++i)
        {
            if(!flag[s[i]-'a'])
            {
                flag[s[i]-'a']=true;
                ans=ans+n-i;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}