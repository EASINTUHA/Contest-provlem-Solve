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
        string s;
        cin>>n>>m>>s;
        vector<int>v(7,0);
        for(int i=0;i<s.size();i++)
        {
            v[s[i]-'A']++;
        }
        int ans=0;
        for(int i=0;i<7;i++)
        {
            if(v[i]<m)
            {
                ans=ans+(m-v[i]);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}