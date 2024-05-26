#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,count=0;
        cin>>a>>b;
        count=b/2;
        for(int i=0;i<b/2;i++)
        {
            a=a-7;
        }
        if(a<=0)
        {
            a=0;
        }
        if(b%2!=0)
        {
            a=a-11;
            count++;
        }
        if(a<=0)
        {
            a=0;
        }
        count=count+a/15;
        a=a-15*(a/15);
        if(a>0)
        {
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}