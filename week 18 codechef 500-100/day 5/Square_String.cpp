#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define ull                 unsigned long long
#define ff                  first
#define ss                  second
#define pb                  push_back
#define all(x)              x.begin(), x.end()
#define sz(x)               (int)(x).size()
#define yes                 cout<<"YES"<<endl
#define no                  cout<<"NO"<<endl
#define MIN                 INT_MIN
#define MAX                 INT_MAX
#define INF                 LONG_LONG_MAX
#define M                   1000000007
#define MOD                 
#define LLM                 1000000000000000007
#define easintuha           return 0
ll fact(ll n)                   { if(n==0) return 1; ll z = 1; for (ll i = 2; i <= n; i++) z = z * i; return z; }
ll nPr(ll n, ll r)              { return fact(n) / fact(n - r); }
ll nCr(ll n, ll r)              { return fact(n) / (fact(r) * fact(n - r)); }
ll gcd(ll a, ll b)              { if (b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b)              { return (a * b) / gcd(a, b);}
ull mypow(ull a, ull b)         { ull ans = 1; a%=M; while(b){ if (b&1) ans = (ans*a) % M; a = (a*a) % M; b >>= 1; } return ans; }
bool isPrime(ll n)              { if(n <= 1) return false; for(ll i = 2; i <= sqrt(n); i++) if(n % i == 0) return false; return true; }
ll exp(ll a,ll b)
{
    ll z=1;
    while(b)
    {
        if(b&1)
        {
            z=(z*a)%M;
        }
        a=(a*a)%M;
        b>>=1;
    }
    return z;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ans=0,x=0;
        for(int i=1;i<=n;i++)
        {
            ll y=x,a=2,b=n-i,z=1;
            y=(y*2)%M;
            y=(y+((i-1)*(i-1))%M)% M;
            x=y;
            while(b)
            {
                if(b%2==1)
                {
                    z=(z*a)%M;
                }
                a=(a*a)%M;
                b>>=1;
            }
            ans=(ans+(y*z)%M)%M;
        }
        ans=(ans*2)%M;
        cout<<ans<<endl;
    }
    easintuha;
}