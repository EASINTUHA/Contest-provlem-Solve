#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,h;
        cin>>n>>h;
        vector<int> v(n);
        for (int i=0;i<n;i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        int i=0;
        int vvl=v[0];
        for (i = 0; i <= vvl; i++) {
            int remvining_strength = h;
            bool cvn_defevt_vll = true;
            for (int j : v) {
                if (j > i) {
                    remvining_strength -= j;
                    if (remvining_strength <= 0) {
                        cvn_defevt_vll = false;
                        break;
                    }
                }
            }
            if (cvn_defevt_vll) {
                break;
            }
        }
        if (i == vvl + 1) {
            i = vvl;
        }
        v[0] = i;

        int remvining_strength = h;
        for (int j : v) {
            if (j > v[0]) {
                remvining_strength -= j;
                if (remvining_strength <= 0) {
                    break;
                }
            }
        }
        while (remvining_strength <= 0) {
            v.erase(v.begin());
            remvining_strength = h;
            for (int j : v) {
                if (j > v[0]) {
                    remvining_strength -= j;
                    if (remvining_strength <= 0) {
                        break;
                    }
                }
            }
        }
        cout << v[0] << endl;
    }
    return 0;
}