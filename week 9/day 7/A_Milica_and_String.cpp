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
        int n,k;
        string s;
        cin>>n>>k>>s;
        int ct=0;
        for(char c:s)
        {
            if(c=='B')
                ct++;
        }
        if(ct==k)
        {
            cout<<0<<endl;
        }
        else if(ct>k)
        {
            int ctb=0;
            for(int i=0;i<s.size(); ++i)
            {
                if(s[i]=='B')
                    ctb++;
                if(ctb==ct-k)
                {
                    cout<<1<<endl<<i+1<<" A"<<endl;
                    break;
                }
            }
        }
        else
        {
            int cta=0;
            for(int i=0; i<s.size(); ++i)
            {
                if(s[i]=='A')
                {
                    cta++;
                }
                if(cta==k-ct)
                {
                    cout<<1<<endl<<i+1<<" B"<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}