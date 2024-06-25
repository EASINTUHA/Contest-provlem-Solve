#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int p,q;
        cin>>p>>q;
        string s;
        cin>>s;
        vector<int> v(q);
        for(int i=0;i<q;i++)
        {
            cin>>v[i];
        }
        string s1;
        cin>>s1;
        set<int> x(v.begin(), v.end());
        vector<int> y(x.begin(), x.end());
        sort(y.begin(), y.end());
        sort(s1.begin(), s1.end());

        map<int, char> z; // cnt
        for (size_t i = 0; i < y.size(); ++i) {
            z[y[i]] = s1[i];
        }

        for (const auto &kv : z) {
            s[kv.first - 1] = kv.second;
        }

        cout << s << endl;
    }
    return 0;
}