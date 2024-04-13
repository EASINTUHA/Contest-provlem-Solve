#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        int ans=0;
        unordered_map <int,int>mp;
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
        for(int i=0;i<n;i++)
        {
            mp[v[i]]++;
            if(mp[v[i]]==2)
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}