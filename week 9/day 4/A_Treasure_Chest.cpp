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
        int x, y, k;
        cin>>x>>y>>k;
        if(x>=y)
            cout<<x<<endl;
        else if(x+k>=y)
            cout<<y<<endl;
        else
            cout<<y+y-x-k<<endl;
    }
    return 0;
}