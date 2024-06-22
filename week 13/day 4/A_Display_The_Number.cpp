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
        long long n;
        cin>>n;
        if(n%2==1)
        {
            cout<<7;
            int m=n/2-1;
            for(int i=0;i<m;i++)
            {
                cout<<1;
            }
            cout<<endl;
        }
        else
        {
            int m=n/2;
            for(int i=0;i<m;i++)
            {
                cout<<1;
            }
            cout<<endl;
        }
    }
    return 0;
}