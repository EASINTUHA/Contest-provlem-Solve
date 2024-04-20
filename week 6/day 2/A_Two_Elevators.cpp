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
        int n=a-1;
        int m=abs(b-c)+c-1;
        if(n<m)
        {
            cout<<1<<endl;
        }
        else if(n==m)
        {
            cout<<3<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
    }
    return 0;
}

