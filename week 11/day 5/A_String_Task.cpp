#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s,r="";
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    for(auto i:s)
    {
        if(i=='a' || i=='e' || i=='i' || i=='o' || i=='y' || i=='u')
        {
            continue;
        }
        else
        {
            r=r+".";
            r=r+i;
        }
    }
    cout<<r<<endl;
    return 0;
}