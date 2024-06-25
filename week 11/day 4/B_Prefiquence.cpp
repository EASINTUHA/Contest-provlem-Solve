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
        int n,m;
        string s,s1;
        cin>>n>>m>>s>>s1;
        int ans=0;
        for(int i=0,j=0;i<n && j<m;j++)
        {
            if(s[i]==s1[j])
            {
                ans++;
                i++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}