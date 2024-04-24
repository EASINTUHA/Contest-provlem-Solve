#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        long long S = 0;
        for (int i = 0; i < n; i++)
        {
            if (S == 0)
            {
                S = v[i];
            } else {
                if (v[i] > 1)
                {
                    S = (S * v[i]) % MOD;
                }
                else
                {
                    S = (S + v[i]) % MOD;
                }
            }
        }
        cout << S << endl;
    }
    return 0;
}
