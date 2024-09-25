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
#define INF                 1e9
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
        ll n,total=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            total=total+v[i];
        }
        if(n==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            sort(all(v));
            int l=0,r=INF,ans=-1;
            while(l<=r)
            {
                int mid,x,y=0;
                vector<int> v1=v;
                mid=l+(r-l)/2;
                v1[n-1]=v1[n-1]+mid;
                x=total+mid;
                double d=x/(2.0*n);
                for(int i=0;i<n;i++)
                {
                    if(v1[i]<d)
                    {
                        y++;
                    }
                }
                if(y>n/2)
                {
                    ans=mid;
                    r=mid-1;
                }
                else
                {
                    l=mid+1;
                }
            }
            cout<<ans<<endl;
        }
    }
    easintuha;
}