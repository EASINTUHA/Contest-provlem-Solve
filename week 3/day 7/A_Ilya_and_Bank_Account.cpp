#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    if(s[0]!='-')
        cout<<s<<endl;
    else
    {
        for(int i=1;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                s.erase(i,1);
            }
            else 
            {
                break;
            }
        }
        int sz = s.size()-1;
        if (s[sz-1]>s[sz])
        {
            s.erase(sz-1,1);
            if(s=="-0")
                cout<<0<<endl;
            else    
                cout<<s<<endl;
        }
        else
        {
            s.pop_back();
            cout<<s<<endl;
        }
    }
    return 0;
}