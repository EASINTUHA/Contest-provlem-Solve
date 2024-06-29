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
        string s;
        cin>>s;
        string ch ="abcdefgh";
        int it = ch.find(s[0]);
        for(int i=0;i<ch.size(); ++i)
        {
            if(i==it)
                continue;
            else
                cout<<ch[i]<<s[1]<<endl;
        }
        for(int i=1; i<=8; ++i)
        {
            if(i==s[1]-'0')
                continue;
            else
                cout<<s[0]<<i<<endl;
        }
    }
    return 0;
}