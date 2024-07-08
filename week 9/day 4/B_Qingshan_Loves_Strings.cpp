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
        string s,t;
        cin>>n>>m>>s>>t;
        bool valid = 1;
        for(int i=1; i<m; ++i)
        {
            if(t[i]==t[i-1])
            {
                valid=0;
                break;
            }
        }
        bool flag=true;
        for(int i=1; i<n; ++i)
        {
            if(s[i]==s[i-1] && flag)
            {
                if(s[i-1]==t[0] || s[i]==t[m-1] || !valid)
                {
                    cout<<"No"<<endl;
                    flag=false;
                }
            }
        }
        if(flag)
        {
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}