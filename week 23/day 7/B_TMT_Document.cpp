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
        ll n,m=0,count=0;
        cin>>n;
        string s;
        cin>>s;
        bool flag=false;
        if(s.size()%3==0)
        {
            flag=true;
        }
        for(int i=0;i<s.size() && flag;i++)
        {
            if(s[i]=='T')
            {
                m++;
            }
            else if(s[i]=='M')
            {
                ++count;
                if(m < count)
                {
                    flag = false; 
                    break;
                }
            }
        }
        if(m!=2*count)
        {
            flag=false;
        }
        m=count=0;
        for(int i=s.size()-1;i>=0 && flag;i--)
        {
            if(s[i]=='T')
            {
                ++m;
            }
            else if(s[i]=='M')
            {
                ++count;
                if(m < count)
                {
                    flag=false;
                    break;
                }
            }
        }
        cout<<(flag ?"YES":"NO")<<endl;
    }
    easintuha;
}
        