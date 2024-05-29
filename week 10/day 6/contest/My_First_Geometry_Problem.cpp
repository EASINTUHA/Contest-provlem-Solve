#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int a=0,b=0,c=0,d=0;
        if (s[0]=='1')
        {
            a=10;
        }
        if(s[1]=='1')
        {
            b=-10;
        }
        if(s[2]=='1')
        {
            c=10;
        }
        if(s[3]=='1')
        {
            d=-10;
        }
        int x=a-b+1;
        int y=c-d+1;
        int total=x*y;
        cout<<total<<endl;
    }
    return 0;
}
