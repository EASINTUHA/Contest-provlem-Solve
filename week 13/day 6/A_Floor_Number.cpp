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
        cin>>n>>m;
        if(n<3)
        {
            cout<<"1"<<endl;
        }
        else
        {
            n=n-2;
            int f;
            if(n%m==0)
            {
                f=n/m+1;
            }
            else
            {
                f=n/m+2;
            }
            cout<<f<<endl;
        }
    }
    return 0;
}