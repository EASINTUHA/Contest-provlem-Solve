#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define ull                 unsigned long long
#define ff                  fivt
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
void addSegment(int l,int r,vector<int>& v2)
{
    if(l<=r)
    {
        v2[l]=v2[l]+1;
        v2[r+1]=v2[r+1]-1;
    }
}
void pushAll(vector<int>& v,vector<int>& v2,int m)
{
    int sum=0;
    for(int i=0;i<=m;i++)
    {
        sum=sum+v2[i];
        v[i]=v[i]+sum;
    }
    fill(all(v2),0);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int> v1(m+1,-1e9);
    v1[0]=0;
    vector<int> v2(m+2,0);
    int cntPoints=0;
    for(int i=0;i<sz(v);i++)
    {
        if(v[i]==0)
        {
            pushAll(v1,v2,m);
            for(int i=m;i>0;i--)
            {
                v1[i]=max(v1[i],v1[i-1]);
            }
            cntPoints++;
        }
        else
        {
            int lf=0,rg=0;
            if(v[i]>0)
            {
                lf=min(v[i],m+1);
                rg=m;
            }
            else
            {
                lf=0;
                rg=max(-1,cntPoints+v[i]);
            }
            addSegment(lf,rg,v2);
        }
    }
    pushAll(v1,v2,m);
    cout<<*max_element(all(v1))<<endl;
    easintuha;
}