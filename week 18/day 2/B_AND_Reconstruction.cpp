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
#define LLM                 1000000000000000007
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
        ll n,x,y;
        bool flag=true,f;
        cin>>n;
        vector<int> v(n-1),v1(n,0);
        for(int i=0;i<n-1;i++)
        {
            cin>>v[i];
        }
        v1[0]=v[0];
        for (int i=1;i<n-1;i++)
        {
            x=v[i-1] | v[i];
            y=v1[i-1] & x;
            if(y != v[i-1])
            {
                v1[i]=x;
                flag=false;
                break;
            }
            else
            {
                v1[i]=x;
            }
        }
        v1[n-1]=v[n-2];
        x=v1[n-2] & v1[n-1];
        if(x==v[n-2])
        {
            f=false;
        }
        else
        {
            f=true;
        }
        if(flag && f)
        {
            flag = false;
        }
        n=sz(v1);
        if(flag)
        {
            for(int i=0;i<n;i++)
            {
                cout<<v1[i]<<" ";
            }
        }
        else
        {
            cout<<-1;
        }
        cout<<endl;
    }
    return 0;
}