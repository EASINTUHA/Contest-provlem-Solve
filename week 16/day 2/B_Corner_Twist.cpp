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
bool canTransform(const vector<vector<int>>& a, const vector<vector<int>>& b, int n, int m) {
    vector<vector<int>> diff(n, vector<int>(m));
    
    // Calculate the difference matrix
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            diff[i][j] = (b[i][j] - a[i][j] + 3) % 3;
        }
    }

    // Check and neutralize differences using 2x2 submatrices
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < m - 1; ++j) {
            // If the top-left corner has a difference, try to neutralize it
            int d = diff[i][j];
            if (d != 0) {
                diff[i][j] = (diff[i][j] - d + 3) % 3;
                diff[i][j + 1] = (diff[i][j + 1] - 2 * d + 3) % 3;
                diff[i + 1][j] = (diff[i + 1][j] - 2 * d + 3) % 3;
                diff[i + 1][j + 1] = (diff[i + 1][j + 1] - d + 3) % 3;
            }
        }
    }

    // Check if all differences have been neutralized
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (diff[i][j] != 0) {
                return false;
            }
        }
    }

    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int>> v1(n,vector<int>(m));
        vector<vector<int>> v2(n,vector<int>(m));
        bool flag=false;
        for(int i=0;i<n;i++) 
        {
            for(int j=0;j<m;j++) 
            {
                char c;
                cin>>c;
                int x=c-'0';
                v1[i][j]=x;
            }
        }
        for(int i=0;i<n;i++) 
        {
            for(int j=0;j<m;j++) 
            {
                char c;
                cin>>c;
                int x=c-'0';
                v2[i][j]=x;
            }
        }
        vector<vector<int>> diff(n, vector<int>(m));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int x=v2[i][j]-v1[i][j]+3;
                diff[i][j]=x%3;
            }
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<m-1;j++)
            {
                int x=diff[i][j];
                if(x != 0)
                {
                    int a=diff[i][j]-x+3;
                    diff[i][j]=a%3;
                    a=diff[i][j+1]-2*x+3;
                    diff[i][j+1]=a%3;
                    a=diff[i+1][j]-2*x+3;
                    diff[i+1][j]=a%3;
                    a=diff[i+1][j+1]-x+3;
                    diff[i+1][j+1]=a%3;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(diff[i][j] != 0 && !flag)
                {
                    flag=true;
                    break;
                }
            }
            if(flag)
            {
                break;
            }
        }
        if(flag)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}

