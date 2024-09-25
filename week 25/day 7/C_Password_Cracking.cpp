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
int outp(string s1)
{
    cout<<"? "<<s1<<endl;
    int x;
    cin>>x;
    return x;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        bool flag=false;
        cin>>n;
        string s="00";
        if(n==1)
        {
            if(outp("1"))
            {
                cout<<"! 1"<<endl;
            }
            else
            {
                cout<<"! 0"<<endl;
            }
        }
        else
        {
            string s1,s2,s3,s4;
            if(outp("00"))
            {
                s="00";
            }
            else if(outp("01"))
            {
                s="01";
            }
            else if(outp("10"))
            {
                s="10";
            }
            else
            {
                string ans=string(n,'1');
                cout<<"! "<<ans<<endl;
                continue;
            }
            for(int i=0;i<n-2;i++)
            {
                s1=s+"0";
                s2=s+"1";
                if(!flag)
                {
                    if(outp(s1))
                    {
                        s=s1;
                    }
                    else if(outp(s2))
                    {
                        s=s2;
                    }
                    else
                    {
                        flag=true;
                    }
                }
                if(flag)
                {
                    string s3="0"+s;
                    string s4="1"+s;
                    if(outp(s3))
                    {
                        s=s3;
                    }
                    else
                    {
                        s=s4;
                    }
                }
            }
            cout<<"! "<<s<<endl;
        }
    }
    easintuha;
}