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
        int n,m;
        string x,s;
        cin>>n>>m>>x>>s;
        int ct=0;
        bool flag=true;
        for(int i=0;i<=10;i++)
        {
            if(x.find(s) != string::npos)
            {
                cout<<i<<endl;
                flag=false;
                break;
            }
            x=x+x;
        }
        if(flag)
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}