#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int a,long long int b)
{
    return b==0?a:gcd(b,a%b);
}
bool isPrime(long long int n)
{
    if(n<=1)
    {
        return false;
    }
    for(long long int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        if(r<4)
        {
            cout<<-1<<endl;
        }
        else if(l==r)
        {
            if(isPrime(r))
            {
                cout<<-1<<endl;
            }
            else if(l%2==0)
            {
                cout<<2<<" "<<l-2<<endl;
            }
            else
            {
                bool flag=true;
                for(int i=3;i<=sqrt(r);i++)
                {
                    int j=l-i;
                    if(gcd(i,j)!=1 && flag)
                    {
                        cout<<i<<" "<<j<<endl;
                        flag=false;
                    }
                }
                if(flag)
                {
                    cout<<-1<<endl;
                }
            }
        }
        else
        {
            if(r%2)
            {
                cout<<2<<" "<<r-3<<endl;
            }
            else
            {
                cout<<2<<" "<<r-2<<endl;
            }
        }
    }
    return 0;
}