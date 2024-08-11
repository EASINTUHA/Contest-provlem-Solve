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
        vector<pair<int,int>>v(16),v1(16);
        for(int i=0;i<16;i++)
        {
            int x;
            cin>>x;
            v[i].ff=x;
            v[i].ss=i;
        }
        sort(all(v));
        v1[v[0].ss].ss=0;
        v1[v[1].ss].ss=1;
        v1[v[2].ss].ss=1;
        v1[v[3].ss].ss=2;
        v1[v[4].ss].ss=2;
        v1[v[5].ss].ss=2;
        v1[v[6].ss].ss=2;
        v1[v[7].ss].ss=3;
        v1[v[8].ss].ss=3;
        v1[v[9].ss].ss=3;
        v1[v[10].ss].ss=3;
        v1[v[11].ss].ss=3;
        v1[v[12].ss].ss=3;
        v1[v[13].ss].ss=3;
        v1[v[14].ss].ss=3;
        v1[v[15].ss].ss=4;
        for(int i=0;i<16;i++)
        {
            cout<<v1[i].ss<<" ";
        }
        cout<<endl;
    }
    easintuha;
}