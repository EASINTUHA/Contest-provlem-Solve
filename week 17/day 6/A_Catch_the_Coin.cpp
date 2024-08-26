#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> coins(n);
    for (int i = 0; i < n; ++i) {
        cin >> coins[i].first >> coins[i].second;
    }

    for (int i = 0; i < n; ++i) {
        int x = coins[i].first;
        int y = coins[i].second;
        
        int t = max(abs(x), abs(y));
        if (y >= t) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
