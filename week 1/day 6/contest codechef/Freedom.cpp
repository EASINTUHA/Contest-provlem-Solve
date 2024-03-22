#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans = 0;
        unordered_map<int, int> C;
        for (int i = 0; i < n; i++)
        {
            int b = arr[i];
            int r = b * 3;
            int a = b - 1;
            if (a != 0 && (r % a) == 0)
                ans += C[r / a];
            C[arr[i]]++;
        }
        cout << ans << endl;
    }
    return 0;
}
