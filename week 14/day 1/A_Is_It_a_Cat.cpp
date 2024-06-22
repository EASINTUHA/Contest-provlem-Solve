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
        string ss;
        for(int i=0;i<n;i++)
        {
            s[i]=tolower(s[i]);
        }
        for(int i=0;i<n;i++)
        {
            if (ss.empty())
            {
                ss.push_back(s[i]);
            }
            if(ss.back() != s[i])
            {
                ss.push_back(s[i]);
            }
        }
        if(ss=="meow")
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}