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
        long long int prod=1;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            prod=(prod*x)%1000000007;
        }
        if(prod>0)
        {
            cout<<1<<endl<<1<<" "<<0<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}