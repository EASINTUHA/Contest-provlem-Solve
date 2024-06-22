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
        int n;
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        bool flag=true;
        for(int i=0;i<s.size();i++)
        {
            if (c>s[i] && flag)
            {
                s.insert(i,1,c);
                cout<<s<<endl;
                flag=false;
            }
        }
        if(flag)
        {
            s=s+c;
            cout<<s<<endl;
        }
    }
    return 0;
}