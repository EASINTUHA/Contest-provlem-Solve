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
        string s,t;
        cin>>s;
        bool flag=false;
        for(int i=1;i<s.size(); ++i)
        {
            if(s[i]==s[i-1])
                flag=true;
        }
        if(s=="()")
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            if(flag)
            {
                for(int i=0;i<s.size();i++)
                {
                    t.push_back('(');
                    t.push_back(')');
                }
                cout<<t<<endl;
            }
            else
            {
                for(int i=0;i<s.size(); ++i)
                {
                    t.push_back('(');
                }
                for(int i=0;i<s.size(); ++i)
                {
                    t.push_back(')');
                }
                cout<<t<<endl;
            }
        }
    }
    return 0;
}