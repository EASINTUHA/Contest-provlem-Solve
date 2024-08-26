#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int n=0,m=0;
    for(char c:s)
    {
        if(islower(c))
        {
            n++;
        }
        else
        {
            m++;
        }
    }
    if(m>n)
    {
        for(auto c:s)
        {
            cout<<char(toupper(c));
        }
    }
    else
    {
        for(auto c:s)
        {
            cout<<char(tolower(c));
        }
    }
    cout<<endl;
    return 0;
}