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
        int x,y;
        cin>>x>>y;
        if(x%y)
        {
            cout<<y-(x%y)<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}