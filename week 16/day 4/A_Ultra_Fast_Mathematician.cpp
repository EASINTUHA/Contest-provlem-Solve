#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s1,s2;
    cin>>s1>>s2;
    vector<string> s3;
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]==s2[i])
        {
            cout<<0;
        }
        else
        {
            cout<<1;
        }
    }
    return 0;
}