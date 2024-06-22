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
        long long n;
        string s;
        cin>>n>>s;
        bool flag=true;
        if(n%3==2)
        {
            flag=false;
        }
        else
        for(int i=2;i<s.size();i=i+3)
        {
            if(s[i]!=s[i-1])
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}