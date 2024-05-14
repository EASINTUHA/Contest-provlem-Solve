#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<1<<endl;
        cout<<1<<endl;
    }
    else if(n==2)
    {
        cout<<1<<endl;
        cout<<2<<endl;
    }
    else if(n==3)
    {
        cout<<1<<endl;
        cout<<3<<endl;
    }
    else
    {
        int count=0,ans=0;
        if(n%2==0)
        {
            ans=n/2;
            cout<<ans<<endl;
            for(int i=0;i<ans;i++)
            {
                cout<<2<<" ";
            }
        }
        else
        {
            ans=n/2-1;
            cout<<ans+1<<endl;
            for(int i=0;i<ans;i++)
            {
                cout<<2<<" ";
            }
            cout<<3<<endl;
        }
    }
    return 0;
}