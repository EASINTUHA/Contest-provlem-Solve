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
    map<char,int>m;
    int count=0;
    for(int i=0; i<s.size(); ++i)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            m[s[i]]++;
        }
        else
        {
            char c;
            c=tolower(s[i]);
            if(m[c]>0)
            {
                m[c]--;
            }
            else
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}