#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int t;
    cin >> t;
    vector<int> results;
    
    for (int i = 0; i < t; ++i) {
        long long n, m;
        cin >> n >> m;
        
        if (m == 0) {
            results.push_back(n);
        } else {
            long long mask = (1LL << (m + 1)) - 1;
            results.push_back(n | mask);
        }
    }
    
    for (int result : results) {
        cout << result << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
