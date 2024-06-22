#include <iostream>
#include <vector>
#include <algorithm>
#define int long long
using namespace std;

void sol() {
    int n;
    cin >> n;
    vector<int> v(n);
    
    for (auto &val : v) cin >> val;
    
    int lcm = 1;
    for (auto &val : v) {
        int y = __gcd(lcm, val);
        y = val / y;
        lcm *= y;
        if (lcm > 1e18) {  // Early exit if lcm becomes too large to handle
            cout << -1 << endl;
            return;
        }
    }
    
    int sum = 0;
    vector<int> bets;
    for (auto &val : v) {
        sum += lcm / val;
        bets.push_back(lcm / val);
        // Check if the product of current bet and corresponding value exceeds the LCM
        if (lcm / val * val != lcm) {
            cout << -1 << endl;
            return;
        }
    }
    
    // Check if the total sum of bets is less than the LCM
    if (sum < lcm) {
        for (auto &bet : bets) {
            cout << bet << " ";
        }
        cout << endl;
    } else {
        cout << -1 << endl;
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int test;
    cin >> test;
    while (test--) {
        sol();
    }
    
    return 0;
}
