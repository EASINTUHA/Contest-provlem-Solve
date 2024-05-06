#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=INT_MAX;
        for(int i=0;i<=26;i++)
        {
            char ch='a'+i;
            int p=0,l=0,r=n-1;
            while(l<=r)
            {
                if (s[l] != s[r])
                {
                    if (s[l]==ch)
                    {
                        l++;
                        p++;
                    }
                    else if(s[r]==ch)
                    {
                        r--;
                        p++;
                    }
                    else
                    {
                        p=INT_MAX;
                        break;
                    }
                }
                else
                {
                    l++;
                    r--;
                }
            }
            ans=min(ans,p);
        }
        if (ans==INT_MAX)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    }
    return 0;
}