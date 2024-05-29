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
        string s;
        cin>>s;
        int zero=0,one=0;
        char ch=s[0];
        if (ch=='1')
        {
            one++;
        }
        else
        {
            zero++;
        }
        for (int i=1;i<n;i++)
        {
            if(s[i] != ch)
            {
                if (s[i]=='0')
                {
                    zero++;
                }
                else
                {
                    one++;
                }
                ch=s[i];
            }
        }
        int ans=min(zero,one);
        cout<<ans<<endl;
    }
    return 0;
}