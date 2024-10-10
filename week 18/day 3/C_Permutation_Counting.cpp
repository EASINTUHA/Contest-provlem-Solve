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
        ll n,k,h=1e13,l=1,ans=0;;
        cin>>n>>k;
        vector<ll> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        while(l<=h)
        {
            ll mid=(l+(h-l)/2);
            ll temp_k=k;
            vector<ll> temp_v=v;
            bool flag=true;
            for(int i=0;i<n;i++)
            {
                if(temp_v[i]<mid)
                {
                    ll diff=mid-temp_v[i];
                    if (temp_k<diff)
                    {
                        flag=false;
                        break;
                    }
                    else
                    {
                        temp_k=temp_k-diff;
                    }
                }
                temp_v[i]=temp_v[i]-mid;
            }
            ll c=0;
            if(flag)
            {
                for(int i=0;i<n;i++)
                {
                    if(temp_v[i]>0)
                    {
                        c++;
                    }
                }
                if(c>n)
                {
                    c=n;
                }
            }
            else
            {
                c=-1;
            }
            if(c==-1)
            {
                h=mid-1;
            }
            else
            {
                ans=max(ans,1+temp_k+c+((mid-1)*n));
                l=mid+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}