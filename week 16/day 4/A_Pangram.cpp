#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n<26)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        vector<int> v(26,0);
        for(int i=0;i<s.size();i++)
        {
            char c=tolower(s[i]);
            int x=c-'a';
            v[x]++;
        }
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==0)
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
        cout<<"YES"<<endl;
    }
    return 0;
}