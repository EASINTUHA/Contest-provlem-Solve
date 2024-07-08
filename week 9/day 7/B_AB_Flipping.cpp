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
        string s;
        cin>>n>>s;
        int x=n,y=0;
        for(int i=0; i<n; ++i)
        {   
            if(s[i]=='A')
            {
                x=min(i,x);
            }
            if(s[i]=='B')
            {
                y=max(i,y);
            }
        }
        if(x>y)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<y-x<<endl;
        }
    }
    return 0;
}