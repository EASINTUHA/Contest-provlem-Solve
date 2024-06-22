#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    if(s.size()<2)
    {
        int n=s[0]-'0';
        if(n%4)
            cout<<0<<endl;
        else
            cout<<4<<endl;
        return 0;
    }
    string str=s.substr(s.size()-2,2);
    int n=stoi(str);
    if(n%4)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<4<<endl;
    }
    return 0;
}