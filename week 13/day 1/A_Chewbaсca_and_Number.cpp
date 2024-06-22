#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    for(int i=0; i<s.size(); ++i)
    {
        int x=s[i]-'0';
        if(i==0 && x==9)
            continue;
        if(x>=5)
            s[i]='9'-x;
    }
    cout<<s<<endl;
    return 0;
}