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
        int n;
        cin>>n;
        vector<int> v1(n),v2(n);
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        for(int i=0;i<n;i++)
        {
            cin >> v2[i];
        }
        int x=sz(v1),count=0;
        vector<int> v3=v1,v4=v2;
        sort(all(v3));
        sort(all(v4));
        map<int,int> mp;
        for(int i=0;i<sz(v2);i++)
        {
            mp[v2[i]]=i;
        }
        for(int i=0;i<x;i++)
        {
            if(v1[i] != v2[i])
            {
                int p=mp[v1[i]];
                swap(v2[i],v2[p]);
                count++;
                mp[v1[i]]=i;
                mp[v2[p]]=p;
            }
        }
        if(v3 != v4)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            int z=count%2;
            if(z==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}