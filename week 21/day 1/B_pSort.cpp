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
#define INF                 ll_ll_MAX
#define M                   1000000007
#define LLM                 1000000000000000007
#define easintuha           return 0
ll fact(ll n)                   { if(n==0) return 1; ll res = 1; for (ll i = 2; i <= n; i++) res = res * i; return res; }
ll nPr(ll n, ll r)              { return fact(n) / fact(n - r); }
ll nCr(ll n, ll r)              { return fact(n) / (fact(r) * fact(n - r)); }
ll gcd(ll a, ll b)              { if (b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b)              { return (a * b) / gcd(a, b);}
ll mypow(ull a, ull b)         { ull ans = 1; a%=M; while(b){ if (b&1) ans = (ans*a) % M; a = (a*a) % M; b >>= 1; } return ans; }
bool isPrime(ll n)              { if(n <= 1) return false; for(ll i = 2; i <= sqrt(n); i++) if(n % i == 0) return false; return true; }
void dfs(ll node, const vector<vector<ll> > &g, vector<bool> &visited, vector<ll> &group, ll root){

    if(visited[node])
    {
        return;
    }
    visited[node]=1;
    group[node]=root;
    for(ll i=0;i<g[node].size();i++)
    {
        ll u=g[node][i];
        if(visited[u])
        {
            continue;
        }
        dfs(u,g,visited,group,root);
    }
    return;
}
int main()
{
    ll n; 
    cin>>n;
    vector<ll> v(n+1);
    for(ll i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    vector<vector<ll>> g(n+1);
    for(ll p = 1; p <= n; p++)
    {
        ll d; scanf("%ld", &d);
        ll u = p - d; if((u > 0) && (u <= n)){g[p].push_back(u); g[u].push_back(p);}
        ll v = p + d; if((v > 0) && (v <= n)){g[p].push_back(v); g[v].push_back(p);}
    }

    vector<bool> mark(n + 1, 0);
    vector<ll> group(n + 1, 0);
    for(ll p = 1; p <= n; p++)
    {
        if(mark[p])
        {
            continue;
        }; 
        dfs(p, g, mark, group, p);
    }
    bool flag=true;
    for(ll p=1;p<=n;p++)
    {
        if(group[p] != group[v[p]])
        {
            flag = false;
            break;
        }
    }
    if(!flag)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    easintuha;
}