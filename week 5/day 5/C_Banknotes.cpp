#include<bits/stdc++.h>
using namespace std;
inline long long int power(long long int a,long long int b)
{
    long long int x=1;
    while(b)
    {
        if(b%2==1)
        x=x*a;
        a=a*a;
        b>>=1;
    }
    return x;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        vector<long long int> a(n);
        for(long long int i=0;i<n;i++) 
        {
            long long int x;
            cin>>x;
            a[i]=power(10,x);
        }
        k++;
        long long int ans=0;
        for(long long int i=0;i<n;i++)
        {
            long long int cnt=k;
            if(i+1<n)
            {
                cnt=min(cnt,a[i+1]/a[i]-1);
            }
            ans=ans+a[i]*1LL*cnt;
            k=k-cnt;
        }
        cout<<ans<<endl;
    }
    return 0;
}