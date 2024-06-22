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
        int n,m,p;
        cin>>n>>m;
        bool flag=false;
        if(m==1)
        {
            if(n>=1)
            {
                flag=true;
            }
            else
            {
                flag=false;
            }
        }
        else
        {
            p=(m*(m+1)/2)+m-1;
            if(n>=p)
            {
                flag=true;
            }
            else
            {
                flag=false;
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}