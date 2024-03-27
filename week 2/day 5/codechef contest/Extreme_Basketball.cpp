#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int difference=a-b;
        if(difference>=10)
        cout<<0<<endl;
        else
        {
            int c=10-difference;
            int d=(c+1)/2;
            int e=(c+2)/3;
            if(d<e)
            {
                cout<<d<<endl;
            }
            else
            {
                cout<<e<<endl;
            }
        }
    }
    return 0;
}
