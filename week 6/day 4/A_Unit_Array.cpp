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
        int n;
        cin>>n;
        long long int a=1,b=0;
        for(int i=0; i<n; ++i)
        {
            int x;
            cin>>x;
            a=a*x;
            b=b+x;
        }
        for(int i=0;i<100;i++)
        {
            if(b>=0 && a==1)
            {
                cout<<i<<endl;
                break;
            }
            a=-a;
            b=b+2;
        }
    }
    return 0;
}