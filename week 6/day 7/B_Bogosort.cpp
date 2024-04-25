#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        
        // Sorting the vector in non-decreasing order
        sort(v.begin(), v.end());
        
        // Print the vector in reverse to satisfy the problem's requirement
        for (int i = n - 1; i >= 0; i--) {
            cout << v[i];
            if (i > 0) cout << " ";  // To manage the spaces correctly
        }
        cout << "\n";
    }
    return 0;
}
