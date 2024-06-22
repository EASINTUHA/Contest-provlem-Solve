#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    vector<int> v(26,0);
    for(int i=0; i<s.size(); ++i)
    {
        v[s[i]-'a']++;
    }
    int count=0;
    for(int i=0; i<26; ++i)
    {
        if(v[i]>0) count++;
    }
    if(count%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}