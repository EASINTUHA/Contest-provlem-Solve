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
        int a,b,c,d,e;
        cin>>a>>b>>c>>d>> e;
        bool flag=true;
        if(c+e>=a && c-e<=1)
        {
            flag=false;
        }
        else if(c+e>=a && d+e>=b)
        {
            flag=false;
        }
        else if(c-e<=1 && d-e<=1)
        {
            flag=false;
        }
        else if(d+e>=b && d-e<=1)
        {
            flag=false;
        }
        if(flag)
        {
            cout<<a+b-2<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}