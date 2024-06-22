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
        int a,b,c,count=1;
        cin>>a>>b;
        c=a^b;
        while(c>0 &&(c&1)==0)
        {
            c>>= 1;
            count<<= 1;
        }
        cout<<count<<endl;
    }
    return 0;
}
