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
#define loop(i,a,b)         for(int i=a;i<b;i++)
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
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> v(n,INT_MAX);
        vector<int> v1(n,INT_MAX);
        vector<int> v2(n,INT_MAX);
        bool flag=true;
        for(int i=0;i<sz(s);i++)
        {
            if(s[i]=='s')
            {
                v2[i]=n-i;
            }
            else if(s[i]=='p')
            {
                v1[i]=i+1;
            }
            else
            {
                v[i]=i+1;
            }
        }
        for(int i=sz(s)-2;i>=0;i--)
        {
            v1[i]=min(v1[i],v1[i+1]);
        }
        for(int i=1;i<sz(s);i++)
        {
            v2[i]=min(v2[i],v2[i-1]);
        }
        vector<int> v3(n);
        for(int i=0;i<sz(s);i++)
        {
            v3[i]=min(v2[i],v1[i]);
        }
        sort(all(v3));
        for(int i=0;i<sz(s);i++)
        {
            if(v3[i]<i+1)
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            yes;
        }
        else
        {
            no;
        }
    }
    easintuha;
}