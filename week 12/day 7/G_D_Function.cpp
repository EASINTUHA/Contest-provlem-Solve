#include<bits/stdc++.h>
using namespace std;
long long int pow(long long int x,long long int y)
{   
    long long int ans=1;
    x=x%1000000007;
    while(y)
    {
        if(y&1)
        ans=(ans*x)%1000000007;
        x=(x*x)%1000000007;
        y>>=1;
    }
        return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long long int m,n,k;
        cin>>m>>n>>k;
        if(k>9)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<(pow(9/k+1,n)-pow(9/k+1,m)+1000000007)%1000000007<<endl;
        }
    }
    return 0;
}