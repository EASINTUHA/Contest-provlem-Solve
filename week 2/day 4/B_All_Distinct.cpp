#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        map<int,int>freq;
        for(int i=0;i<n;i++)
        {
            freq[v[i]]++;
        }
        int count=0;
        for (auto i:freq)
        {
            count +=(i.second-1);
        }
        int ans=n-count;
        if (count%2==1)
        {
            ans--;
        }
        cout<<ans<<endl;
    }
    return 0;
}
