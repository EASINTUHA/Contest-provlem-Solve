#include <bits/stdc++.h>
using namespace std;
long long p1[200009];
long long p2[200009];
int main()
{
    int n, k, q, x = 0, l, r;
    vector<int> v;
    cin >> n >> k >> q;
    while (n--)
    {
        cin >> l >> r;
        p1[l]++;
        p1[r + 1]--;
    }
    long long count = 0;
    for (int i = 0; i < 200009; i++)
    {
        count += p1[i];
        if (count >= k)
            p1[i] = 1;
        else
            p1[i] = 0;
    }
    for (int i = 1; i < 200009; i++)
    {
        p2[i] = p2[i - 1] + p1[i - 1];
    }
    while (q--)
    {
        cin >> l >> r;
        cout << p2[r + 1] - p2[l] << endl;
    }
    return 0;
}
