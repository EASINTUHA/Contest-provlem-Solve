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
        int n,a,q;
        string s;
        cin>>n>>a>>q>>s;
        int x=0,y=0;
        bool flag=false;
        for(char c : s)
        {
            if(c=='+') 
                x++;
            else
                y++;
            if(a+x-y>=n)
            {
                flag=true;
            }
        }
        if(a>=n || flag)
        {
            cout<<"YES"<<endl;
        }
        else if(a+x>=n)
        {
            cout<<"MAYBE"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}