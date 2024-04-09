#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> durability(n);
        for (int i = 0; i < n; i++) {
            cin >> durability[i];
        }

        long long int total_attacks = 2LL * m;
        int first_sunk = 0;
        int last_sunk = 0;

        // Calculate number of ships sunk from the front
        for (int i = 0; i < n && total_attacks > 0; i++) {
            int damage = min(durability[i], (int)(total_attacks / 2));
            first_sunk += damage;
            durability[i] -= damage;
            total_attacks -= damage * 2;
        }

        // Calculate number of ships sunk from the back
        for (int i = n - 1; i >= 0 && total_attacks > 0; i--) {
            int damage = min(durability[i], (int)(total_attacks / 2));
            last_sunk += damage;
            durability[i] -= damage;
            total_attacks -= damage * 2;
        }

        cout << first_sunk + last_sunk << endl;
    }

    return 0;
}
