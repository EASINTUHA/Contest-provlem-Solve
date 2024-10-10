#include<bits/stdc++.h>
using namespace std;
#define ll                  long long int
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
#define LLM                 1000000000000000007
#define easintuha           return 0
ll fact(ll n)                   { if(n==0) return 1; ll res = 1; for (ll i = 2; i <= n; i++) res = res * i; return res; }
ll nPr(ll n, ll r)              { return fact(n) / fact(n - r); }
ll nCr(ll n, ll r)              { return fact(n) / (fact(r) * fact(n - r)); }
ll gcd(ll a, ll b)              { if (b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b)              { return (a * b) / gcd(a, b);}
ull mypow(ull a, ull b)         { ull ans = 1; a%=M; while(b){ if (b&1) ans = (ans*a) % M; a = (a*a) % M; b >>= 1; } return ans; }
bool isPrime(ll n)              { if(n <= 1) return false; for(ll i = 2; i <= sqrt(n); i++) if(n % i == 0) return false; return true; }
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll x,y,a,b,p,q;
        ll val=0,dif=0;
        cin>>x>>y>>a>>b;
        if(x==0 && y==0)
        {
            cout<<"0"<<endl;
        }
        else if(x>0 && y>0)
        {
            dif=abs(abs(x)-abs(y));
            val=dif*a;
            if(2*a<b)
            {
                cout<<((min(x,y)*2)*a)+val<<endl;
            }
            else
            {
                cout<<((min(x,y))*b)+val<<endl;
            }
 
        }
        else if(x<0 && y<0)
        {
            dif=abs(abs(x)-abs(y));
            val=dif*a;
            if(2*a<b)
            {
                cout<<abs(((min(x,y)*2)*a)+val)<<endl;
            }
            else
            {
                cout<<abs(((min(x,y))*b)+val)<<endl;
            }
 
        }
        else
        {
            cout<<(abs(x)+abs(y))*a<<endl;
        }
    }
    easintuha;
}