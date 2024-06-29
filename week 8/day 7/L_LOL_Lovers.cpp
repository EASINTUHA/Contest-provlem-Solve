#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string s;
    cin>>n>>s;
    int ctL=0, ctO=0, netL=0, netO=0;
    for(auto c:s)
    {
        if(c=='L')
        {
            netL++;
        }
        else
        {
            netO++;
        }
    }
    bool flag=true;
    for(int i=0; i<n-1; ++i)
    {
        if(s[i]=='L')
        {
            ctL++;
        }
        else
        {
            ctO++;
        }
        if(ctL!=netL-ctL && ctO!=netO-ctO)
        {
            cout<<i+1<<endl;
            flag=false;
            break;
        }
    }
    if(flag)
    {
        cout<<-1<<endl;
    }
    return 0;
}