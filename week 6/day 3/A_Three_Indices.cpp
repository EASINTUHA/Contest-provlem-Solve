//
// Created by Abhishek on 01-07-2020.
//

#include <bits/stdc++.h>

#define ll long long
#define db double
#define pb push_back
#define beg begin
#define en end
#define fir first
#define sec second
#define deb(x) cout<<#x<<": "<<x<<"\n"
#define all(x) x.begin(),x.end()
#define fo(i, n) for(i=0 ; i<n ; i++)
#define Fo(i, k, n) for(i=k ; i<n ; i++)

using namespace std;

const ll mod = 1000000007;
const ll N = 200005;  // array size
const ll inf = 10000000000000000;
bool prime[10000000];

void print(vector<ll> v) {
    ll i;
    fo(i, v.size())cout << v[i] << " ";
    cout << "\n";
}

void print(set<ll> s) {
    set<ll>::iterator itr = s.begin();
    for (; itr != s.end(); itr++) {
        cout << (*itr) << " ";
    }
    cout << "\n";
}

vector<ll> read(ll n) {
    ll i;
    vector<ll> arr(n, 0);
    fo(i, n)cin >> arr[i];
    return arr;
}

vector<ll> read(ll n, ll k) {
    ll i;
    vector<ll> arr(n + k, 0);
    Fo(i, k, n + k)cin >> arr[i];
    return arr;
}

bool isEven(ll n) {
    return n % 2 == 0;
}

bool isOdd(ll n) {
    return n % 2 == 1;
}

void fillPrime() {
    ll i, j;
    ll n = 1000001;
    fo(i, n) {
        prime[i] = 1;
    }

    prime[0] = 0;
    prime[1] = 0;

    for (i = 2; i * i <= n; i++) {
        if (prime[i]) {

            for (j = i * i; j <= n; j += i) {
                prime[j] = 0;
            }

        }
    }
}

//O(log( max(a,b) ) )
ll gcd(ll a, ll b) {
    if (a < b)
        swap(a, b);
    if (b == 0)
        return a;
    return gcd(b, a % b);
}


class Triplet {
public:
    ll gcd;
    ll x;
    ll y;
};


// get x,y for ax+by = gcd(a,b)
Triplet extendedEuclidian(ll a, ll b) {

    if (b == 0) {
        Triplet ans;
        ans.gcd = a;
        ans.x = 1;
        ans.y = 0;
        return ans;
    }

    Triplet smallAns = extendedEuclidian(b, a % b);
    Triplet ans;
    ans.gcd = smallAns.gcd;
    ans.x = smallAns.y;
    ans.y = smallAns.x - (a / b) * smallAns.y;
    return ans;
}


// it will exist only if gcd(a,m) = 1;
ll modInv(ll a, ll m) {
    Triplet ans = extendedEuclidian(a, m);
    return (ans.x % m + m) % m;
}

// (x^n)%m
ll power(ll x, ll n, ll m) {
    if (x == 0) {
        return 0;
    }
    if (n == 0) {
        return 1;
    }
    ll ans;
    if (isEven(n)) {
        ll smallAns = power(x, n / 2, m);
        ans = (smallAns * smallAns) % m;
    } else {
        ll smallAns = power(x, n - 1, m);
        ans = x;
        ans = (ans * smallAns) % m;
    }
    // for negative values also
    return (ans + m) % m;

}


void solve() {
    ll t;
    cin >> (t);
    while (t--) {

        ll i, j, k, n, m, p, q, x, y, a, b;


        cin >> n;
        vector<ll> arr(n);
        arr = read(n);


        bool found = 0;

        Fo(i,1,n-1){
            if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
                found = 1;
                break;
            }
        }

        if(!found){
            cout<<"No\n";
        } else {
            cout<<"Yes\n";
            cout<<i<<" "<<i+1<<" "<<i+2<<"\n";
        }

    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}