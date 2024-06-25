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
        long long int ans=0,count=0;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                count++;
            }
            else if(s[i]=='0' && count>0)
            {
                ++ans;
                ans=ans+count;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}