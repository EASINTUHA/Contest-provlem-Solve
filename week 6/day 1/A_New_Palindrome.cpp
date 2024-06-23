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
        unordered_map<char,int>m;
        for(auto c:s)
        {
            m[c]++;
        }
        bool flag=true;
        if(m.size()>2)
        {
            flag=true;
        }
        else if(m.size()<2)
        {
            flag=false;
        }
        else
        {
            for(auto it:m)
            {
                if(it.second<2)
                {
                    flag=false;
                    break;
                }
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}