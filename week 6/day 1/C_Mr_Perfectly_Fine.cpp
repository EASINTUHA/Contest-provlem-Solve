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
        int n,a,b,c;
        cin>>n;
        c=a=b=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int x;
            string s;
            cin>>x>>s;
            if(s[0]=='1')
            {
                a=min(x,a);
            }
            if(s[1]=='1')
            {
                b=min(x,b);
            }
            if(s[0]=='1' && s[1]=='1')
            {
                c=min(x,c);
            }
        }
        if(a==INT_MAX || b==INT_MAX)
        {
            cout<<"-1"<<endl;
        }
        else if(c<a+b)
        {
            cout<<c<<endl;
        }
        else
        {
            cout<<a+b<<endl;
        }
    }
    return 0;
}