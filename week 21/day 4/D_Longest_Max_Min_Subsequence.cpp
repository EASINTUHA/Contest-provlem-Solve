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
        ll n,m,a;
        cin>>n;
        m=n+1;
        vector<ll> v(m),v1(m,0),v2(m,-1),v3;
        vector<vector<ll>> v4(m);
        vector<bool> v5(m,0);
        m=1000000000;
        for (ll i=1;i<=n;i++)
        {
            cin>>v[i];
            v2[v[i]]=i;
            v4[v[i]].pb(i);
        }
        for(ll i=1;i<=n;i++)
        {
            if(v2[i] !=-1)
            {
                v1[v2[i]]++;
                m=min(m,v2[i]);
            }
        }
        for(ll i=1;i<=n;)
        {
            if(i==m)
            {
                v3.pb(v[i]);
                v1[v2[v[i]]]--;
                while(m<=n && v1[m]==0)
                {
                    m++;
                }
                i++;
            }
            else
            {
                if(sz(v3)%2!=0)
                {
                    a=1000000000;
                    for(ll j=i;j<=min(m,n);)
                    {
                        if(v5[j]==0)
                        {
                            a=min(a,v[j]);
                        }
                        j++;
                    }
                    for(ll j=i;j<=min(m,n);)
                    {
                        if(v[j]==a)
                        {
                            i=j+1;
                            j++;
                            break;
                        }
                        j++;
                    }
                    if(a==1000000000)
                    {
                        break;
                    }
                    v3.pb(a);
                    --v1[v2[a]];
                    while(m<=n && v1[m]==0)
                    {
                        m++;
                    }
                }
                else
                {
                    a=0;
                    for(ll j=i;j<=min(m,n);)
                    {
                        if(v5[j]==0)
                        {
                            a=max(a,v[j]);
                        }
                        ++j;
                    }
                    for(ll j=i;j<=min(m,n);)
                    {
                        if (v[j]==a)
                        {
                            i=j+1;
                            j++;
                            break;
                        }
                        j++;
                    }
                    if(a==0)
                    {
                        break;
                    }
                    v3.pb(a);
                    --v1[v2[a]];
                    while(m<=n && v1[m]==0)
                    {
                        m++;
                    }
                }
            }
            int m=v3.back();
            for (int i=0;i<sz(v4[m]);i++)
            {
                a=v4[m][i];
                v5[a]=1;
            }
        }
        m=sz(v3);
        cout<<m<<endl;
        for(int i=0;i<m;i++)
        {
            cout<<v3[i]<<" ";
        }
        cout<<endl;
    }
    easintuha;
}