#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    auto it=unique(v.begin(), v.end());
    v.erase(it,v.end());
    cout << v.size() << endl;
    return 0;
}
