#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int d,e;
        if(a%b==0)
        {
            d=a/b;
        }
        else
        {
            d=a/b+1;
        }
        if(a%c==0)
        {
            e=a/c;
        }
        else
        {
            e=a/c+1;
        }
        cout<<d-e-1<<endl;
    }
    return 0;
}