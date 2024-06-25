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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a%2==1 && b%2==1 && c%2==1)
        {
            cout<<a/2+b/2+c/2+d/2+1<<endl;
        }
        else
        {
            cout<<a/2+b/2+c/2+d/2<<endl;
        }
    }
    return 0;
}