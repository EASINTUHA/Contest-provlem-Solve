#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        long long m;
        cin >> n >> m;
        
        set<int> numbers;
        vector<int> mexValues;

        // Reading input sequences
        for (int i = 0; i < n; ++i) {
            int li;
            cin >> li;
            for (int j = 0; j < li; ++j) {
                int x;
                cin >> x;
                numbers.insert(x);
            }
        }
        
        // Calculate the smallest x not in the sequences
        int currentMex = 0;
        for (auto num : numbers) {
            if (num == currentMex) {
                currentMex++;
            } else if (num > currentMex) {
                break;
            }
        }

        // If m < currentMex, f(k) = k+1 for k from 0 to m
        if (m < currentMex) {
            cout << (m + 1) * (m + 2) / 2 << endl;
        } else {
            // Otherwise, f(k) = currentMex for k = 0 to currentMex - 1
            // and f(k) = k + 1 for k >= currentMex
            long long sum = currentMex * (m + 1) - (currentMex * (currentMex - 1) / 2) + (m - currentMex + 1) * (m + currentMex + 2) / 2;
            cout << sum << endl;
        }
    }
    
    return 0;
}
