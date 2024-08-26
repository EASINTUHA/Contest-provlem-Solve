#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<int, int>> edges;
        vector<int> parent(n + 1, -1);

        // Use node 1 as the base node for querying
        for (int i = 2; i <= n; i++) {
            cout << "? " << 1 << " " << i << endl;
            cout.flush();
            int response;
            cin >> response;
            if (response == 1) {
                edges.push_back({1, i});
                parent[i] = 1;
            }
        }

        // For all other nodes, determine their connections
        for (int i = 2; i <= n; i++) {
            if (parent[i] == -1) {
                cout << "? " << 1 << " " << i << endl;
                cout.flush();
                int response;
                cin >> response;
                edges.push_back({response, i});
            }
        }

        // Output the final tree structure
        cout << "! ";
        for (auto &edge : edges) {
            cout << edge.first << " " << edge.second << " ";
        }
        cout << endl;
        cout.flush();
    }

    return 0;
}
