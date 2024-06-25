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
        int n,m,k;
        cin>>n>>m>>k;
        int x,y;
        cin>>x>>y;
        bool flag=false;
        while(k--)
        {
            int p,q;
            cin>>p>>q;
            int friend_color=(p+q)%2;
            if((x+y)%2==friend_color)
            {
                flag=true;
            }
        }
        if(flag)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}