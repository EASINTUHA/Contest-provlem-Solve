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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(b>d || c-a>d-b)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<2*(d-b)+a-c<<endl;
        }
    }
    return 0;
}